// Given a sorted and rotated array
// Find out the highest element(pivot) in the array
#include<iostream>
using namespace std;
int main()
{
    int a[] = {6,7,1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int s = 0, e = n - 1;

    while(s <= e){
        int mid = (s+e)/2;
        if(mid<e && a[mid]>a[mid + 1]){
            cout << mid;
            break;
        }
        if(mid>s && a[mid]<a[mid - 1]){
            cout << mid-1;
            break;
        }
        if(a[s] >= a[mid]){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }

    }
    if(s > e){
        cout<<"Pivot not found";
    }
    return 0;
}
