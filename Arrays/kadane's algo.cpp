#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[100];
    int cs = 0; //current sum
    int ms = 0; //maximum sum

    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n; i++){
        cs = cs + a[i];
        if(cs < 0){
            cs = 0;
        }
        ms = max(cs,ms);
    }

    cout<<ms<<endl;

    return 0;
}
