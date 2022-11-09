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
int test,x[10000],y[10000];
cin>>test;
while (test--)
{
    ll n,cnt=0;
    cin>>n;
    ll a[n+2];
    for(ll i=1; i<=n; i++) cin>>a[i];
    ll d[n+2];
 
    d[1]=a[1];
    for(ll i=2; i<=n; i++){
        if(a[i]>0 and d[i-1]-a[i]>=0){
            cnt++;
            break;
        }
        d[i]=d[i-1]+a[i];
    }
    if(cnt==0){
    for(ll i=1; i<=n; i++) cout<<d[i]<<" ";
    cout<<endl;
    }
    else  cout<<-1<<endl;
}
}