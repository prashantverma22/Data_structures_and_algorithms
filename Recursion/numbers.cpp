#include<iostream>
using namespace std;
// in increasing order
void inc(int n)
{
    if(n==0){
        return;
    }
    inc(n-1);
    cout<<n<<" ";
}
// in decreasing order
void dec(int n)
{
    if(n==0){
        return;
    }
    cout<<n<<" ";
    dec(n-1);
}
int main()
{
    int n=6;
    inc(n);
    cout<<endl;
    dec(n);
    return 0;
}