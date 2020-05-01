#include<iostream>
#include<cstring>
using namespace std;
void charType(char a[]){
    for(int i=0;i<strlen(a);i++){
        if(a[i] >=97 && a[i] <= 122){
            cout<<"L"<<endl;
        }
        else if(a[i] >=67 && a[i] <= 92){
            cout<<"U"<<endl;
        }
        else{
            cout<<"I"<<endl;
        }
    }
}
int main() {
    char ch[10];
    cin>>ch;
    charType(ch);
	return 0;
}