#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) (x.begin(), x.end())
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int test,x;
cin>>test;
while (test--)
{
    cin>>x;
    int a,ct=0;
    vector<int>v;
    vector<int>::iterator it;
  
    for(int i=0;i<x;i++){
    cin>>a;
    v.push_back(a);
    }
    if (!std::is_sorted(v.begin(),v.end())) 
    {
            for(int i=0;i<x;i++){
                for(int j=x-1;j>=0;j--)
                if(v[i]!=v[j] and i!=j){v[j]+=v[i];
                v.erase(v.begin()+i); 
                ct++;
                cout<<v.size()<<' ';
                }
                //cout<<v.size()<<' ';
                cout<<endl;
        }
        
    }
    cout<<ct<<endl;
}

}