#include <iostream>
using namespace std;

void primeSieve(int *a,int n)
{
    a[0] = a[1] = 0;
    a[2] = 1;
    //mark all odd numbers as prime.
    for(int i=3; i<=n; i+=2){
        a[i] = 1;
    }

    //sieve logic to mark non prime numbers as 0
    //iterate over only odd numbers
    for(int i=3; i<=n; i+=2){
        //if a number is prime
        if(a[i]){
            // mark all the multiples of that numbers as not prime.
            for(int j=i*i; j<=n; j+=2*i){
                a[j] = 0;
            }
        }  
    }
    return;
}
int main() {
    int n=1000000;
    int a[n] = {0};
    primeSieve(a,100);
    for(int i=0; i<=100; i++){
        if(a[i]){
            cout << i << " ";
        }
    }
    return 0;
}
