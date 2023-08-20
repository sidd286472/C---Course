#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> g;
    for(int i=1;i<=5;i++){
        g.push_back(i);
    }
    cout<<"o/p of begin() and end()"<<endl;
    for(auto i=g.begin();i!=g.end();i++){
        cout<<(*i)<<endl;
    }
    cout<<"o/p for cbegin() and cend()"<<endl;
    for(auto i=g.cbegin();i!=g.cend();i++){
        cout<<(*i)<<endl;
    }
    cout<<"output for rbegin() and rend()"<<endl;
    for(auto ir=g.rbegin();ir!=g.rend();ir++){
        cout<<(*ir)<<endl;
    }
    return 0;
}