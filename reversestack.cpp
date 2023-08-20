#include<bits/stdc++.h>
using namespace std;

void insertAtBottom(stack<int>&s,int x){
    if(s.empty()){
        s.push(x);
        return;
    }
    int num = s.top();
    s.pop();

    //recursive call
    insertAtBottom(s,x);
    s.push(num);

}
void ReverseStack(stack<int>&stack,int element){

    if(stack.empty()){
        return;
    }
    int num = stack.top();
    stack.pop();

    ReverseStack(stack,element);
    stack.push(num);

    insertAtBottom(stack,element);

}