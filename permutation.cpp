// To check if two strings are permutations of each other.
#include<iostream>
#include<cstring>
using namespace std;

bool permutaion(char *s1, char *s2)
{
    int l1 = strlen(s1);
    int l2 = strlen(s2);
    if(l1 != l2){
        return false;
    }
    // otherwise check for the frequency
    int freq[26] = {0};  // assuming char from 'a-z'

    for(int i=0; i<l1; i++){
        freq[s1[i] - 'a']++;
    }

    for(int i=0; i<l2; i++){
        freq[s2[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
        return true;
    }
}

int main()
{
    char s1[100],s2[100];
    cin>>s1>>s2;

    if(permutaion(s1,s2)){
        cout<<"Yes, it is a permutation.";
    }
    else{
        cout<<"No, it is not.";
    }

    return 0;
}
