#include<bits/stdc++.h>
using namespace std;



int is_prime(int n)
{
   for(int i=2;i<=n/2;i++)
   {
    if(n%i==0)
    {
        return 1;
    }
   }
   return 0;
}
int main()
{
    int n,flag;
    cin>>n;

    flag=is_prime(n);
    if(flag==1){
        cout<<"not prime";
    }
    else{
        cout<<"prime";
    }
    return 0;
}