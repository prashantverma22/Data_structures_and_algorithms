#include<iostream>
using namespace std;
void stringCompress(string str)
{
    int l = str.length();
    for(int i=0; i<l; i++){
        int count = 1;
        while(i<l && str[i] == str[i+1])
        {
            count++;
            i++;
        }
        cout<<str[i]<<count;
    }

}
int main()
{
    string s;
    cin>>s;
    stringCompress(s);
    return 0;
}
