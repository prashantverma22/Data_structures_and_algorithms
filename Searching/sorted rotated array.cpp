// search in a sorted rotated array
#include <iostream>
using namespace std;
int search(int a[],int s,int e,int key)
{
    //base case
    if(s>e){
        return -1;
    }
    //recursive case
    int mid = (s+e)/2;
    if(a[mid] == key){
        return mid;
    }
    
    //mid lies in the first line
    if(a[s] <= a[mid]){
        if(key >= a[s] && key <= a[mid]){
            return search(a,s,mid-1,key);
        }
        else{
            return search(a,mid+1,e,key);
        }
    }

    //mid lies in the second line
    if(key >= a[mid] && key <= a[e]){
        return search(a,mid+1,e,key);
    }
    else{
        return search(a,s,mid-1,key);
    }
}
int main() {
    int a[] = {6,7,1,2,3,4,5};
    int n = sizeof(a)/sizeof(int);
    int key;
    cin>>key;
    cout<<search(a,0,6,1);
    return 0;
}
