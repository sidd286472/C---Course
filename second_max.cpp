#include<iostream>
using namespace std;

int main()
{
    int arr[] = {3, 8, 1, 9, 5, 2, 7, 6, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Max=arr[0];
    int secondMax=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>Max){
            secondMax=Max;
            Max=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=Max){
            secondMax=arr[i];
        }
    }
    cout<<secondMax;
    

    return 0;
}