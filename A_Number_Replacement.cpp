#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) (x.begin(), x.end())
const int N=1e5+123;
#define PQ priority_queue
// int a[N+1],m,ct=0,s[N+1];
map<int,int>m1;
map<char,int>m2;

int main()
{
Fast(input);
int test,x;
cin>>test;

while (test--)
{
    cin>>x;
    char n;
    int m,ct=0,a[x],b[x];
    set<int>s1;
    for(int i=0;i<x;i++){
        cin>>m;
        m1[m]++;
        s1.insert(m);
    }
    for(int i=0;i<x;i++){
        cin>>n;
        m2[n]++;
    }

    for(auto it=m1.begin();it!=m1.end();it++){
      //if((*it).second==(*i).second)ct++;
    //if(a[i]==s[i])ct++;
    int i=0;
    a[i]=(*it).second;
    i++;
    }
    for(auto it=m2.begin();it!=m2.end();it++){
      //if((*it).second==(*i).second)ct++;
    //if(a[i]==s[i])ct++;
    int i=0;
    b[i]=(*it).second;
    i++;
    }
    for(int i=0;i<x;i++){
        if(a[i]==b[i])ct++;
    }
    //if(ct==x)cout<<"YES"<<endl;
    //else cout<<"NO"<<endl;
    cout<<ct<<s1.size()<<' '<<endl;
}
}
