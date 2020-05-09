// Print first occurence or lower bound of an element in a sorted array.
#include<iostream>
using namespace std;

int firstOccurence(int a[], int n, int key)
{
    int s = 0, e = n-1, ans = -1;
    while(s <= e){
        int mid = (s + e)/2;
        if(a[mid] == key){
            ans = mid;
            e = mid - 1;  // we want to find first occurence in the left half.
        }
        else if(a[mid] > key){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return ans;
}

int main()
{
    int a[] = {1,2,2,2,2,4,4};
    int n = sizeof(a)/sizeof(int);  // no. of elements in the array
    int key = 2;

    int ans = firstOccurence(a,n,2);
    cout<<ans;

    return 0;
}
