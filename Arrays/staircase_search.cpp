#include<iostream>
using namespace std;
void input(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>a[i][j];
        }
    }
}
void print(int a[][10],int r,int c)
{
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
}
void stairCase(int a[][10],int r,int c,int key)
{
    int i=0, j = c-1;
    while(i<r && j>=0)
    {
        if(a[i][j] == key)
        {
            cout<<"Found at "<<i<<","<<j<<endl;
            return;
        }
        else if(a[i][j] > key)
        {
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"key not found";
}
int main()
{
    int a[10][10];
    int r,c;
    cin>>r>>c;
    input(a,r,c);
    //print(a,r,c);
    cout<<"Enter the key: ";
    int key;
    cin>>key;
    stairCase(a,r,c,key);
    return 0;
}
