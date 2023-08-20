#include<bits/stdc++.h>
using namespace std;
bool isValidExpression(string expression){


    stack<char> s;

    for(int i=0;i<expression.length();i++){
        char ch = expression[i];

        //if openning bracket comes ,push it into the stack.
        //if close bracket check stacktop and pop.
        if(ch =='(' || ch == '{' || ch == '['){
            s.push(ch);
        }
        else{
            //check for closing bracket.
            if(!s.empty()){
                char top = s.top();
                if((ch ==')' && s.top() == '(') || (ch == '}' && s.top() == '{') || (ch ==']' && s.top() == '[')){
                    s.pop();
                }
                else{
                    return false;
                }
            }
            else{

              return false;  
                
            }
         }
    
    if(s.empty()){
        return true;
    }
    else{
        return false;
    }
}

