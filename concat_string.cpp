#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char s1[] = "Hello";
    char s2[] = " World";
    strcat(s1,s2);
    cout<<"Concatenated String: "<<s1<<endl;
    return 0;
}
