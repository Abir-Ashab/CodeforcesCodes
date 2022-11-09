#include<bits/stdc++.h>
using namespace std;
int main()
{
int test,x,t,ct=0,cn=0,a[100000];
cin>>test;
int b=test;
set<int>s;
while (test--)
{
    cin>>x>>t;
    for(int i=0;i<x;i++){
        cin>>a[i];
        s.insert(a[i]);
    }
    if(x>2*t || (x==t && x!=1 && t!=1)||(s.size()<t))cout<<"Case #"<<5-test<<":"<<" NO"<<'\n';
    else cout<<"Case #"<<b-test<<":"<<" YES"<<'\n';
    s.erase(s.begin(),s.end());
}

}