#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
    int arr[] = {4,3,9,6,1};
    int n = sizeof(arr)/sizeof(int);
    sort(arr,arr+n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<",";
    }
    return 0;
}
