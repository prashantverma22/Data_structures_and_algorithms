#include <iostream>
using namespace std;
// bubble sort using recursion
void bubble_sort(int a[],int j,int n)
{
    //base cases
    if(n==1){
        return;
    }
    if(j==n-1){
        return bubble_sort(a,0,n-1);
    }
    //Recursive calls
    if(a[j] > a[j+1]){
        swap(a[j],a[j+1]);
    }
    bubble_sort(a,j+1,n);
    return;
}
int main() {
    int a[] = {5,4,3,2,1};
    int n = sizeof(a)/sizeof(int);
    bubble_sort(a,0,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
