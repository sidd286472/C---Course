#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack<char> st;
    char ch[100];
    cout<<"provide balance expresssion"<<endl;
    cin>>ch;
    for(int i=0;i<=100;i++){
        
        if(ch[i]!=')'){
            st.push(ch[i]);
        }
        else if(ch[i]==')'){
            if( st.top() =='('){
                cout<<"duplicate brackets exists"<<endl;
                return;
            }
            else{
                st.pop();
            } 
        }
        cout<<"no duplicate bracket exists"<<endl;
    }
    return 0;
}