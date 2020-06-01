#include <iostream>
using namespace std;

void towerOfHanoi(int n,char src,char dest,char helper)
{
    //base case
    if(n==0){
        return;
    }
    //recursive case
    //1. move 'n-1' disks from source to helper
    towerOfHanoi(n-1,src,helper,dest);
    //2. move nth disk from source to destination
    cout << "Move " << n << " disk from " << src << " to " << dest <<endl;
    //3. move 'n-1' disks from helper to destination
    towerOfHanoi(n-1,helper,dest,src);
}

int main() {
    int n;
    cin>>n;
    towerOfHanoi(n, 'A', 'C', 'B');
    return 0;
}
