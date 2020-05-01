#include<iostream>
#include<string>
using namespace std;

int stringCount(string s,char c)
{
    int count=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == c){
            count++;
        }
    }
    return count;
}

int main()
{
    string str = "aabbccddd";
    cout << stringCount(str,'a')<<endl;
    cout << stringCount(str,'b')<<endl;
    cout << stringCount(str,'c')<<endl;
    cout << stringCount(str,'d')<<endl;
    return 0;
}