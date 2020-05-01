#include <iostream>
using namespace std;
int main() {
    int arr[] = {1,3,2,6,8,8};
    int n = sizeof(arr)/sizeof(int);
    int max1 = 0, max2 = 0;
    for(int i=0; i<n; i++){
        if(arr[i] > max1){
            max2 = max1;
            max1 = arr[i];
        }
        if(arr[i] < max1 && arr[i] > max2){
            max2 = arr[i];
        }
    }
    cout << max2;
    return 0;
}
