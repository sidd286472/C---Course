#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>& s,int x)// x is the element that need to be pushed at the bottom of the stack.
{
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    solve(s,x);
    s.push(num);
}
stack<int>pushAtBottomoftheStack(stack<int>&Mystack , int x){
    solve(Mystack,x);
    return Mystack;
}