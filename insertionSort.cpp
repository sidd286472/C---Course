#include<iostream>
using namespace std;
int insertionSort(int arr[],int n){
    //base case
    int i,j,key;

    for(int i=2;i<n-1;i++){
         key = arr[i];
        j=i-1;
    
    while(j>=0 && arr[j]=key){
        arr[j+1]=arr[j];
        j=j-1;
    }
    arr[j+1]=key;
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    insertionSort(arr,n);
    for(int i=0;i<n;i++){
        cout>>arr[i];
    }
    

    return 0;
}