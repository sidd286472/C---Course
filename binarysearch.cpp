#include<iostream>
using namespace std;

int firstoccurrence(int arr[],int n,int key){
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans =0;
    while(s<=e){
        if(arr[mid]==key){
            ans = mid;
             e=mid-1;
        }
        else if(arr[mid]<key){
            s=mid+1;
        }
        else if(arr[mid]>key){
            e=mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}
int main()
{
    int even[5]={1,2,3,3,5};
    cout<<"first occurrence of 5 is"<<firstoccurrence(even,5,5)<<endl;
    return 0;
}