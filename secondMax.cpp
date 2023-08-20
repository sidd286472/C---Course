#include<bits/stdc++.h>

using namespace std;

int secondToMax(int arr[],int n){
    int MAX=INT_MIN;

    for(int i=0;i<n;i++){
        if(arr[i]>MAX){
            MAX=arr[i];
        }
    }
    int SECOND_MAX=INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>SECOND_MAX && arr[i]<MAX){
            SECOND_MAX=arr[i];
        }
    }
    if(SECOND_MAX!=INT_MIN){
        cout<<""<<endl;
    }
    else{
        cout<<""<<endl;
    }

}
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
   
    int res=secondToMax(a,n);
    cout<<res;



  return 0;
}