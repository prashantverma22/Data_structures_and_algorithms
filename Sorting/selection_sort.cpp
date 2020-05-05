#include <iostream>
using namespace std;
void SelectionSort(int A[], int n)
{
    for(int i=0; i<n-1; i++){ //we need to do n-2 passes
        int iMin = i; // elements from i till n-1
        for(int j=i+1; j<n; j++){
            if(A[j] < A[iMin])
                iMin = j; //update the index of minimum element
        }
        int temp = A[i]; //swapping of elements
        A[i] = A[iMin];
        A[iMin] = temp;
    }
}
int main()
{
    int A[] = {2,5,4,9,7};
    SelectionSort(A,5);
    for(int i=0; i<5; i++){
        cout<<A[i]<<" ";
    }

    return 0;
}
