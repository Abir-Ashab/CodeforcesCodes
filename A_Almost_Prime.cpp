#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int x,cnt=0,ct=0;
cin>>x;
int prime[x];
memset(prime,0,sizeof(prime));

for(int i=2;i*i<=x;i++){
    if(prime[i]==0){
        for(int j=i*i;j<=x;j+=i){
            prime[j]=1;
        }
    }
}
int k=0;
for(int i=2;i<=x;i++){
    if(prime[i]==0){prime[k]=i;k++;}
}

for(int j=1;j<=x;j++)
{
   for(int i=0;i<k;i++){
    int z=prime[i];
        if(j%z==0)cnt++;
        if(cnt>=2){ct++;break;}
    }
    cnt=0;
   
}
cout<<ct;
}