#include<iostream>
#include<cstring>
using namespace std;

char *mystrtok(char str[], char delimeter)
{
    static char *ip = NULL;
    if(str != NULL){
        ip=str;
    }
    if(ip == NULL){
        return NULL;
    }

    char *op = new char[strlen(ip)+1]; // +1 for the '\0' or the null character

    int i;
    for(i=0; ip[i] != '\0'; i++){
        if(ip[i] != delimeter){
            op[i] = ip[i];
        }
        else{
            op[i] = '\0';
            ip = ip + i + 1;
            return op;
        }
    }
    op[i] = '\0';
    ip = NULL;
    return op;
}

int main()
{
    char  str[] = "Hello Coding Blocks";
    char *ptr;

    ptr = mystrtok(str, ' ');

    while(ptr != NULL)
    {
        cout<<ptr<<endl;
        ptr = mystrtok(NULL, ' ');
    }


    return 0;
}
