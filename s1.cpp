#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char a[10][100];

    //take input from strings
    int n;
    cin>>n;
    cin.ignore(); // to throw characters in the input stream

    for(int i=0; i<n; i++){
        cin.getline(a[i], 100);
    }

    for(int i=0; i<n; i++){
        cout<<a[i]<<endl;
    }

    char key[100];
    cout<<"Enter string to search: ";
    cin.getline(key,100);

    int i;
    for(i=0; i<n; i++){
        if(strcmp(key, a[i]) == 0){
            cout<<"Key found at index "<<i<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"Not found";
    }

    return 0;
}
