#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    string s[10]={"banana","orange","mango","apple"};
    sort(s,s+4);
    for(int i=0;i<4;i++){
        cout<<s[i]<<",";
    }
    return 0;
}
