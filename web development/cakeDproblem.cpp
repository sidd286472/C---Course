#include<iostream>
using namespace std;
bool isPossible(int sweetness[],int mid,int k){
    int count =0;
    int sum=0;

    for(int i=0;i<sweetness.size();i++){
        sum=sum+sweetness[i];
        if(sum>=mid){
            count++;
            sum=0;
        }
    }
    return count>=k+1;

}
int maxSweetness(int sweetness[],int n,int k){
    int sum=0;
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        sum =sum+sweetness[i];
        min=Math.min(min,sweetness[i]);
    }
    int l=min;
    int h=sum;
    int ans=0;

    while(l<=h){
        int mid=(l+h)/2;
        if(isPossible(sweetness,mid,k){
            ans=mid;
            l=mid+1;
        }
        else{
            h=mid-1;
        }
        cout<<l<<" "<<h;
    }
    return ans;
}