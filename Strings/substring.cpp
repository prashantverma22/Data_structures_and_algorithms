// To print all substrings of a given string.
#include<iostream>
using namespace std;

void substring(char *a)
{
  for(int i=0; a[i] != '\0'; i++){
    for(int j=i; a[j] != '\0'; j++){
        //cout<<"{"<<i<<","<<j<<"}";
        for(int k=i; k<=j; k++){
            cout<<a[k];
        }
        cout<<endl;
    }
    //cout<<endl;
  }
}

int main()
{
    char str[4] = "abc";
    substring(str);

    return 0;
}
