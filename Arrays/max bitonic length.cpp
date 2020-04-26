#include<iostream>
using namespace std;
int bitonic(int a[],int n){
    int inc[n]; //length of increasing subarray
    int dec[n]; //length of decreasing subarray
    int max;

    // increasing sequence
    inc[0] = 1; 
    for(int i=1;i<n;i++){
        if(a[i] > a[i-1]){
            inc[i] = inc[i-1] + 1;
        }
        else{
            inc[i] = 1;
        }
    }

    // decreasing sequence
    dec[n-1] = 1;
    for(int i=n-2; i>=0; i--){
        if(a[i] > a[i+1]){
            dec[i] = dec[i+1] + 1;
        }
        else{
            dec[i] = 1;
        }
    }

    max = inc[0] + dec[0] - 1;
    for(int i=1; i<n; i++){
        if(inc[i] + dec[i] - 1 > max){
            max = inc[i] + dec[i] - 1;
        }
    }
    return max;
}
int main() {
    int t; // no. of testcases..
    cin>>t;
    while(t--){
        int a[100];
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        cout<<bitonic(a,n)<<endl;
    }
	return 0;
}