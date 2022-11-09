#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) (x.begin(), x.end())
const int N=1e5+123;
#define PQ priority_queue
 
int main(){
    ll t; cin>>t; while(t--)
    {
    ll n; cin>>n;
    if(n==3){
        printf("-1\n");
    }
 
    else if(n==5){
        printf("5 4 1 2 3\n");
    }
    else 
    {
    ll a[n+2];
    a[0]=5;
    ll x=n;
    for(int i=1; i<=n; i++){
        a[i]=x;
        x--;
 
        if(a[i-1]==i-1){
            swap(a[i], a[i-1]);
        }
    }
 
    for(ll i=1; i<=n; i++) cout<<a[i]<<" ";
    printf("\n");
    }
}
}