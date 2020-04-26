#include <iostream>
#include<algorithm>
using namespace std;
int targerSumPair(int a[],int n,int sum){
    sort(a,a+n);
    int l = 0;
    int r = n-1;
    while(l < r){
        if(a[l] + a[r] == sum){
            // cout<<l<<" and "<<r;
            cout<<a[l]<<" and "<<a[r]<<endl;
            //Modify l and r
            l++;
            r--;
        }
        else if(a[l] + a[r] < sum){
            l++;
        }
        else{
            r--;
        }
    }
}
int main() {
  int a[1000];
  int n;
  cin>>n;
  for(int i=0;i<n;i++){
      cin>>a[i];
  }
  int s;
  cin>>s;
  targerSumPair(a,n,s);
  return 0;    
}
