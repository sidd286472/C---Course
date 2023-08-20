#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    vector<int> g;
    
    for(int i=1;i<=5;i++){
        g.push_back(i);
    }
    cout<<"Reference operator:g[i]"<<g[2];
    cout<<"front"<<g.front(4);
    cout<<"back:g.back()"<<g.back(3);
    cout<<"at(g)"<<


    return 0;
}