#include<iostream>
using namespace std;
int main() {
    int arr[100];
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int left[100];
	int right[100];
	int water = 0;
	left[0]=arr[0];
    for(int i=0;i<n;i++){
        left[i]=max(left[i-1],arr[i]);
    }
    right[n-1]=arr[n-1];
    for(int i=n-2;i>=0;i--){
        right[i]=max(right[i+1],arr[i]);
    }
    for(int i=0;i<n;i++){
        water += min(left[i],right[i]) - arr[i];
    }
    cout<<water;
	return 0;
}