#include<iostream>
using namespace std;

int main()
{
    void isArmstrong(int n){
  
  	int a=0;
    for(int i=1;i<n;i++){
     n=n%10;
     a=a+n*n*n+n/10;
     }
  if(n){
    cout<<"yes";
  }
  else{
    cout<<"no";
  }
    return 0;
}