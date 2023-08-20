#include<iostream>
using namespace std;

int main()
{
    
    int n;
    int a[n];
    
    for(int i=0;i<n;i++){
        int c=1;
        for(int j=i-1;j>=0;j--){
            if(a[j]<=a[i]){
                c++;
            }
            else{
                break;
            }
            cout<<c;
        }
        
    }
    return 0;
}