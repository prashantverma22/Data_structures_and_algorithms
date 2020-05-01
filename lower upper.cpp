#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    for(i=0;i<s.length();i++){
        if(s[i]>=97 && s[i]<=122){
            cout<<"lowercase"<<endl;
        }
        else if(s[i]>=65 && s[i]<=92){
            cout<<"UPPERCASE"<<endl;
        }
        else{
            cout<<"Invalid"<<endl;
        }
    }
    return 0;
}