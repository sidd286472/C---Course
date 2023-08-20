#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter no of elements in an array:";
    cin>>n;
    int k;
    cout<<"enter the sum to which subarray sum wil be equal:";
    cin>>k;
    int a[n];
    cout<<"elements of array are:";
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int count=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j,n;j++){
            sum=sum+a[j];
            if(sum == k){
              count++;      
            }
        }
        cout<<count;
        
    }
    return 0;
}