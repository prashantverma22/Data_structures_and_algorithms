#include <iostream>
using namespace std;
int missing_num(int arr[],int n)
{
    int total,sum=0;
    total = (n+1) * (n+2)/2;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    return total-sum;
}
int main() {
    int n = 5;
    int arr[] = {1,2,3,4,6,7,8};
    int missing = missing_num(arr,n);
    cout<<missing<<endl;
    return 0;
}
