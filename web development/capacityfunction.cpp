#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> g;
    for(int i=1;i<=5;i++){
        g.push_back(i);
    }
    cout<<"size:"<<g.size()<<endl;
    cout<<"Max_size:"<<g.max_size()<<endl;
    cout<<"capacity:"<<g.capacity()<<endl;

    g.resize(4);

    //check whether the vector is empty or not;
    if(g.empty()==false){
        cout<<"not empty"<<endl;
    }
    else{
        cout<<"empty"<<endl;
    }
    //shrink the vector
    g.shrink_to_fit();
    cout<<"vector elements are:"<<endl;
    for(auto i=g.begin();i!=g.end();i++){
        cout<<(*i)<<endl;
    }
    return 0;
}