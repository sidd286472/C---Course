#include<iostream>
#include<stack>
using namespace std;

int main()
{
    string str = "Siddharth";//first we initialized the string ;

    stack<char> s;//made a stack variable where well push the charachters ino the stack;
    
    for(int i=0;i<str.length();i++){//to traverese the whole string 
        char ch = str[i];//now storing the elemnts of the stack in a new character variable.  
        s.push(ch);
    }
    string ans = "";
    while(!s.empty()){
        char ch=s.top();
        ans.push_back(ch);

        s.pop();
    }
    cout<<"the ans is"<<ans<<endl;
    return 0;
}