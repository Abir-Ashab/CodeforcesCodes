#include <bits/stdc++.h>
using namespace std;

int main()
{
    int test,i,mx=0;
    string s;
    cin>>test;
    map<string,int>mp;
    
    for(i=0;i<test;i++)
    {
        cin>>s;
        mp[s]++;//s konta koybar achhe oita direct ber kortese
    }
    for(auto it=mp.begin();it!=mp.end();it++){
        if(it->second>mx){
            mx=it->second;
            s=it->first;
        }
    }
    cout<<s<<endl;
    
    return 0;
}