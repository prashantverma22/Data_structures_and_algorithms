#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    string s1("hello world!!");
    cout<<s1<<endl;

    string s2 = "again hello..";
    cout<<s2<<endl;

    cout<<s2.length()<<endl;
    for(int j=0; j<s2.length(); j++){
        cout<<s2[j]<<","<<endl;
    }

    string s3;
    getline(cin,s3);
    cout<<s3<<endl;

    string arr[] = {"tarun", "jatin", "abir"};
    sort(arr, arr+3);
    for(int i=0; i<3; i++){
        cout<<arr[i]<<",";
    }

    return 0;
}
