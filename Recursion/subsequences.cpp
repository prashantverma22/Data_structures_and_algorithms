#include <iostream>
using namespace std;

void subsequences(char *input,char *output,int i,int j){
    //base case
    if(input[i] == '\0'){
        output[j] = '\0';
        cout << output << ",";
        return;
    }
    //recursive case
    //1.include the current character
    output[j] = input[i];
    subsequences(input,output,i+1,j+1);
    //2.exclude the current character
    subsequences(input,output,i+1,j);
}

int main() {
    char input[100];
    cin>>input;

    char output[100];
    subsequences(input,output,0,0);
    return 0;
}
