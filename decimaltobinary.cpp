#include<bits/stdc++.h>
using namespace std;

int decimalToBinary(int n) {
 	int T;
  	cin>>T;
  
  	while(T--){
      int n;
      cin>>n;
      
      int p=0;
      for(int i=0;i<=n;i++){
        int p=pow(2,i);
        p=p+pow(2,i);
        cout<<p<<endl;
      }
    }
  return 0;
}
int main()
{
    int n,flag;
    cin>>n;

int flag=decimalToBinary(n);

if(flag){
    cout<<"decimal to binary possible"<<endl;
}
else{
    cout<<"decimal to binary not possible";
}

    return 0;
}