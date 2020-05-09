// To find Square Root of a number using Binary Search.
#include<iostream>
using namespace std;

float squareRoot(int num,int p)
{
    int s=0, e=num;
    float ans;
    int mid;

    while(s<=e){
        mid = (s+e)/2;

    if(mid*mid == num){
        ans = mid;
        break;
    }

    if(mid*mid < num){
        s = mid + 1;
        ans = mid;
    }
    else{
        e = mid - 1;
    }
   }
   //fractional part
   float inc = 0.1;
   for(int i=0;i<p;i++){
    while(ans*ans <= num){
        ans += inc;
    }
    ans=ans-inc;
    inc=inc/10;
   }
   return ans;
}

int main()
{
    cout<<squareRoot(10,3)<<endl;
    cout<<squareRoot(2,2)<<endl;
    return 0;
}
