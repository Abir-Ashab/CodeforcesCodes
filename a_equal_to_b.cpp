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
ll test; cin>>test; 
while(test--){
ll n; cin>>n;
    ll a[n+2]; for(int i=0;i<n;i++) cin>>a[i];
    ll b[n+2]; for(int i=0;i<n;i++) cin>>b[i];
 
    ll a1=0, b1=0, d=0;
 
    for(int i=0;i<n;i++) {
        if(a[i]!=b[i]) d++;
 
        if(a[i]) a1++;
        if(b[i]) b1++;
    }
 
    ll cng = abs(a1-b1);
 
    ll ans=min(d, cng+1);
 
    cout<<ans<<endl;
}
}