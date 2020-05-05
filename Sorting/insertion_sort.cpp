#include <iostream>
using namespace std;
void InsertionSort(int arr[], int n)
{
    for(int i=1; i<n; i++){
      int val = arr[i];
      int hole = i-1;
      while(hole >= 0 && arr[hole] > val){
        arr[hole + 1] = arr[hole];
        hole = hole-1;
      }
      arr[hole + 1] = val;
    }
}
int main()
{
    int arr[] = {5,4,3,2,1};
    InsertionSort(arr,5);
    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
