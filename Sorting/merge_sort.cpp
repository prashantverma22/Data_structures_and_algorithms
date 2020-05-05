#include <iostream>
using namespace std;
void merge(int *arr,int s,int e)
{
    int mid=(s+e)/2;
    int i=s;
    int j=mid+1;
    int k=s;
    int temp[100];
    while(i<=mid && j<=e){
        if(arr[i] < arr[j]){
            temp[k++]=arr[i++];
        }
        else{
            temp[k++]=arr[j++];
        }
    }
    while(i<=mid){
        temp[k++]=arr[i++];
    }
    while(j<=e){
        temp[k++]=arr[j++];
    }

    //copy all elements to original array
    for(int i=s;i<=e;i++){
       arr[i] = temp[i];
    }
}
void merge_sort(int arr[], int s, int e)
{
    //base case
    if(s>=e){
        return;
    }
    //divide the array
    //recursive case
    int mid = (s+e)/2;
    merge_sort(arr,s,mid);
    merge_sort(arr,mid+1,e);
    //merge the two parts
    merge(arr,s,e);
}
int main() {
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    merge_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}
