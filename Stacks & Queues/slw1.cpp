// Maximum element in window of size k
#include <iostream>
#include<deque>
using namespace std;
int main() {
    int n;
    cin>>n;
    int a[10000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    deque<int> q(k);
    int i;
    //process first k elements seperately
    for(i=0;i<k;i++){
        while(!q.empty() && a[i] > a[q.back()]){
            q.pop_back();
        }
        q.push_back(i);
    }
    //process the remaining elements
    for(;i<n;i++){
        cout<<a[q.front()]<<" ";
        //remove the elements which are not a part of the window
        while(!q.empty() && (q.front() <= i-k)){
            q.pop_front();
        }
        //remove the elements which are not useful and are in the window
        while(!q.empty() && a[i] >= a[q.back()]){
            q.pop_back();
        }
        //add the new elements
        q.push_back(i);
    }
    cout<<a[q.front()]<<endl; 
    return 0;
}
