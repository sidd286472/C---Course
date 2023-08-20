#include<iostream>
using namespace std;

int main()
{
  int x,y,HCF,LCM;
  cin>>a>>b;
  
 //finding HCF or GCD concept;
  int x=a;
  int y=b;
  while(a!=b){
    if(a>b){
      a=a-b;
    }
    else{
      b=b-a;
    }
  }
  HCF=a;
  LCM =(x*y)/HCF;
  cout<<LCM<<endl;
  return 0;
}