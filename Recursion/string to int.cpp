// convert a string into integer using recursion.
#include <iostream>
#include<string>
#include<math.h>
using namespace std;
int stringToInt(string s)
{
    if(s.length() == 1){
        return (s[0] - '0');
    }

    double y = stringToInt(s.substr(1));
    double x = s[0] - '0';
    x = x * pow(10, s.length() - 1) + y;
    return int(x);
}

int main() {
    string str = "123456";
    stringToInt(str);
    cout<<str;
    return 0;
}
