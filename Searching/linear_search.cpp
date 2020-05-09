#include<iostream>

using namespace std;

int main()
{
    // Initialize the array
    int arr[5];

    int n;
    cin>>n;

    // Input the elements of array
    cout<<"Enter the elements: ";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    // Key: Element to search
    int key;
    cin>>key;

    //Linear Search Algorithm
    int i;
    for(i=0; i<n; i++){
        if(key==arr[i]){
            cout<<"key found at index: "<<i<<endl;
            break;
        }
    }
    if(i == n){
        cout<<"The key is not present";
    }

    return 0;
}
