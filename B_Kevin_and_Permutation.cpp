#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test;
cin>>test;
while(test--){
 ll n; cin>>n;
 
    ll x=n/2;
    for(ll i=1; i<=x; i++){
        cout<<i+x<<" "<<i<<" ";
    }
 
    if(n%2) cout<<n;
    cout<<"\n";
 
}
return 0;
}