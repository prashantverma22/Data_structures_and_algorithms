#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int key)
{
    int s=0, e=n-1;
    int mid;
    while(s<=e){
        mid = (s+e)/2;
        if(a[mid] == key){
            return mid;   // Element Found
        }
        else if(a[mid] > key){
            // key might be present in left half.
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
    }
    return -1; // key element is not present in the array.
}

int main()
{
    int a[] = {1,3,5,10,12,15,17};
    int n = sizeof(a)/sizeof(int);  // no. of elements in the array
    int key;
    cin>>key;

    int searchIndex = binarySearch(a,n,key);

    if(searchIndex == -1){
        cout<<key<<" is not present"<<endl;
    }
    else{
        cout<<key<<" is present at "<<searchIndex<<endl;
    }

    return 0;
}
