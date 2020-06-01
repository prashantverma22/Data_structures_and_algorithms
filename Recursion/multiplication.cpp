// Given two numbers, multiply using recursion.
#include <iostream>
using namespace std;
int multiply(int x,int y) // basic multiplication of two positive integers...
{
    if(x < y)
    {
        return multiply(y,x);
    }
    else if(y != 0)
    {
        return x + multiply(x, y-1);
    }
    else{
        return 0;
    }
}
int prod(int x,int y)  // basic multiplication of two negative integers...
{
    if(x > 0 && y < 0){
        return prod(y,x);
    }
    else if(x < 0 && y < 0){
        return prod((-1 * x),(-1 * y));  
    }

    if(x > y){
        return prod(y,x);
    }
    else if(y != 0){
        return x + prod(x,y-1);
    }
    else{
        return 0;
    }
}

int main() {
    int a,b;
    cin>>a>>b;
    //cout<<multiply(a,b);
    cout<<prod(a,b);
    return 0;
}
