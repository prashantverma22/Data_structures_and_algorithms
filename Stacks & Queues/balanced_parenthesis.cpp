#include<iostream>
#include<stack>
using namespace std;
bool checkExpression(string str){
    stack<char> s;
    for(int i=0;i<str.size();i++){
        char curr=str[i];
        if(curr == '('){
            s.push(curr);
        }
        else if(curr == ')'){
            if(s.empty() || s.top() != '('){ return false; }
            s.pop();
        }
    }
    return s.empty();
}
int main()
{
    string expr;
    cin>>expr;
    bool isVaild=checkExpression(expr);
    cout<<isVaild;
    return 0;
}