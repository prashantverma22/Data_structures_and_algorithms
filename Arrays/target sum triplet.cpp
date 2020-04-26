#include<iostream>
#include<algorithm>
using namespace std;
void triplet(int a[],int n,int sum){
    sort(a,a+n);
    for(int i=0;i<n-1;i++){
        int x = a[i];
        int l = i+1;
        int r = n-1;
        while(l < r){
            if(x + a[l] + a[r] == sum){
                cout<<x<<", "<<a[l]<<" and "<<a[r]<<endl;
                l++;
                r--;
            }
            else if(x + a[l] + a[r] < sum){
                l++;
            }
            else{
                r--;
            }
        }
    }
}
int main()
{
    int a[1000];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int sum;
    cin>>sum;
    triplet(a,n,sum);
    return 0;
}