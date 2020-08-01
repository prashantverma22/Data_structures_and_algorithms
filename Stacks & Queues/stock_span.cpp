#include <iostream>
#include<stack>
using namespace std;
void calculateSpan(int price[],int n,int span[]){
    stack<int> s;
    s.push(0);
    span[0] = 1;
    for(int i=1;i<n;i++){
        while(!s.empty() && price[s.top()] <= price[i]){
            s.pop();
        }
        span[i] = (s.empty()) ? (i+1) : (i-s.top());
        s.push(i);
    }
}
void print(int a[],int n)
{
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main() {
    int price[100] = {100, 80, 60, 70, 60, 75, 85};
    int n=7;
    int span[n];
    calculateSpan(price,n,span);
    print(span,n);
    return 0;
}
