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
int test,x,a[10000],cnt=0;
cin>>test;
while (test--)
{
    cin>>x;
    for(int i=0;i<x;i++){
        cin>>a[i];
    }
    for(int i=0;i<x;i++){
       if(*max_element(a, a+x)==a[i]){cout<<i+1<<endl;break;};
    }
}

}