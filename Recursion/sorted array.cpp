#include <iostream>
using namespace std;
bool sortedArray(int *a,int n)
{
    //base case
    if(n == 1){
        return true;
    }
    //recursive calls
    if(a[0] < a[1] && sortedArray(a+1,n-1)){
        return true;
    }
    return false;
}
int main() {
    int a[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    if(sortedArray(a,n)){
        cout<<"Sorrtedd";
    }
    else{
        cout<<"Noope";
    }
    return 0;
}
