#include <iostream>
using namespace std;

#define ll long long int

bool isValid(ll books[],ll n,ll k,ll ans)  // n->no of books
{
    int students=1;
    ll current_pages=0;
    for(int i=0;i<n;i++){
        if(current_pages + books[i] > ans){
            current_pages = books[i];
            students++;
            if(students > k){
                return false;
            }
        }
        else{
            current_pages += books[i];
        }
    }
    return true;
}

ll binarySearch(ll books[],ll n,ll k)   // k-> no of students, n-> no of books
{
    ll total=0; // total pages
    ll s=0, e=0;
    for(int i=0;i<n;i++){
        total += books[i];
        s = max(s,books[i]);
    }
    e = total;
    int finalAns=s;
    
    while(s<=e)
    {
        ll mid=(s+e)/2;
        if(isValid(books,n,k,mid)){
            //true
            finalAns=mid;
            e=mid-1;
        }
        else{
            //false
            s=mid+1;
        }
    }
    return finalAns;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    ll n; // books
    ll m; // students
    cin>>n>>m;
    ll books[10000];
    for(int i=0;i<n;i++){
        cin>>books[i];
    }
    cout<<binarySearch(books,n,m)<<endl;
    }
    return 0;
}
