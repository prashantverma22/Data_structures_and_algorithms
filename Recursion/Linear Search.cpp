#include <iostream>
using namespace std;
int linearSearch(int a[],int n,int i,int key)
{
    if(i == n){
        return -1;
    }
    if(a[i] == key){
        return i;
    }
   return linearSearch(a,n,i+1,key);

}
int main() {
    int a[] = {1,2,5,6,3,4};
    int n = sizeof(a)/sizeof(int);
    cout<<linearSearch(a,n,0,5);
    return 0;
}
