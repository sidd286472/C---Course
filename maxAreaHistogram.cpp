#include<iostream>
using namespace std;
int maxAreaHistogram(int a[],int n){
    int i,j;
    int c1=0;
    int c2=0;

    int MAX_AREA=0;
    int MIN_AREA=1
    
    
    for(i=0;i<n;i++){
        int c1=1;
        int c2=1;
        for(int j=i-1;j>=0;j--){
            if(a[j]<=a[i]){
                c1++;
                
            }
            else{
                break;
            }
        }
        for(int j=i+1;j<=n;j++){
            if(a[j]<=a[i]){
                c2++;
                
            }
            else{
                break;
            }
        }
        int area=a[i]*(c1+c2);
        cout<<a[i]<<"-->"<<area<<endl;

    }
   
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<=n;i++){
        cin>>a[i];
    }
    
    int res=maxAreaHistogram( a, n);
     cout<<res;   
    return 0;
}