#include <iostream>
using namespace std;
void BubbleSort(int A[], int n)
{
    int i,j;
    for(int i=0; i<n-1; i++){
        for(int j=0; j<n-i-1; j++){
            if(A[j] > A[j+1]){
                swap(A[j], A[j+1]);
            }
        }
    }
}

int main()
{
    int A[] = {9,6,3,5,4};
    BubbleSort(A,5);
    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }
    return 0;
}
