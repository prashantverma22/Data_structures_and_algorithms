#include <iostream>
#include<cstring>
using namespace std;

char keypad[][10] = {"", "", "ABC","DEF","GHI","JKL","MNO","PQRS","TUV","WXYZ"};

void printKeypad(char *ip,char *op,int i,int j){
    //base case
    if(ip[i] == '\0'){
        op[j] = '\0';
        cout<<op<<" ";
        return;
    }
    //recursive case
    int digit = ip[i] - '0';   // current digit
    if(digit == 0 || digit == 1){
        printKeypad(ip,op,i+1,j);
    }
    for(int k=0; keypad[digit][k] != '\0'; k++){
        op[j] = keypad[digit][k];
        printKeypad(ip,op,i+1,j+1);
    }

}
int main() {
    char ip[100];
    char op[100];
    cin>>ip;
    printKeypad(ip,op,0,0);
    return 0;
}
