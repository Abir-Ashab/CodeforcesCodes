#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x,y;
cin>>test;
while(test--){
 ll m,n;
 cin>>m>>n;
 if(m==n and m==1 and m==1)cout<<0<<endl;
 else if(m==n and m!=1 and n!=1 )cout<<3*(n-1)+1<<endl;
 else if(m>n) cout<<2*(n-1)+m<<endl;
 else cout<<2*(m-1)+n<<endl;
}
return 0;
}