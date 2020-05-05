#include<iostream>
#include<ctime>
#include<cstdlib>

using namespace std;

void shuffle(int *a,int s,int e){
    srand(time(NULL));
    int i,j,temp;
    for(int i=e;i>0;i--){
       j = rand()%(i+1);
       swap(a[i],a[j]);
    }
}

int partition(int *arr,int s,int e){
    int p = arr[e];
    int i = s-1;
    for(int j=s; j<e;j++){
        if(arr[j] <= p){
        i++;
        swap(arr[i],arr[j]);
        }
    }
    // Bring the pivot element to its sorted position.
    swap(arr[e],arr[i+1]);
    return i+1;
}
void quick_sort(int *arr,int s,int e){
    if(s>=e){
        return;
    }
    int pivot = partition(arr,s,e);
    quick_sort(arr,s,pivot-1);
    quick_sort(arr,pivot+1,e);
}
int main()
{
    int arr[]={2,1,4,6,7,5,8};
    int n = sizeof(arr)/sizeof(int);
    quick_sort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
