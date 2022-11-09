#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int test;
    cin>>test;
    map<string,int>s1;


    for(int i=1;i<=test;i++)
    {
        cin>>s;
        s1.insert(pair<string,int>(s,i));
    }
    for(auto it=s1.begin();it!=s1.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
