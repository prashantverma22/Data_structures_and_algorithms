#include<iostream>
using namespace std;
int power(int x,int y)
{
    //base case
    if(y == 0){
        return 1;
    }
    // recursive calls
    return x*power(x,y-1);
}
int optimized(int x,int y)
{
    if(y == 0){
        return 1;
    }
    int ans = optimized(x,y/2);
    ans *= ans;

    // if power is odd
    if(y&1){
        return x*ans;
    }
    return ans;
}
int main()
{
    int a,b;
    cin>>a>>b;
    //cout<<power(a,b);
    cout<<optimized(a,b);
    return 0;
}
