// binary search using recursion
#include <iostream>
using namespace std;
int binarySearch(int a[],int s,int e,int key){
    if(e>=s){
        int mid = (s+e)/2;
        if(a[mid] == key){
            return mid;
        }
        if(a[mid] > key){
            return binarySearch(a,s,mid-1,key);
        }
        return binarySearch(a,mid+1,e,key);
    }
    return -1;
}
int main() {
    int a[] = {1,2,3,4,5,6,7};
    int n = sizeof(a)/sizeof(int);
    cout<<binarySearch(a,0,n-1,4);
    return 0;
}
