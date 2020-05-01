// function to reverse a string.
#include<iostream>
#include<string>
using namespace std;

void reverse(string str)
{
   for(int i=str.length()-1; i>= 0; i--){
      cout<<str[i];
   }
}

int main()
{
    string s = "oola";
    reverse(s);

    return 0;
}
