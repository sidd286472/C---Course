#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
    int ans;
    int max=0,min=100;
    vector<int>v{4,2,6,4,1,7,5};
    for(int i=0;i<v.size();i++)
    { int c=1;
        for(int l=i-1;l>=0;l--)
        {
            if(v[l]>v[i]){
                c++;
            }
            else{
                break;
            }         
        }
        for(int r=i+1;r<v.size();r++){
            if(v[r]>v[i]){
                c++;
            }
             else{
                break;
            }       
        }
        ans=v[i]*c;

        if(ans<min){
            min=ans;
        }
        if(ans>max){
            max=ans;
        }
        
        cout<<ans<<" ";
        
    }
    cout<<endl;
    cout<<"Maximum area of histogram"<<":"<<max<<endl;
    cout<<"Minimum area of histogram"<<":"<<min<<endl;
    
    return 0;
}