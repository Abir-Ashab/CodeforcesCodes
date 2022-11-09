#include<bits/stdc++.h>
using namespace std;
#define rep for(int i=0;i<x;i++)
typedef long long ll;
const int N=1e5+123;
 
int32_t main() {
ios_base::sync_with_stdio(0);
cin.tie(0);
ll test,x;
cin>>test;
while(test--){
 cin>>x;
 int a[x+2];
 int y=10000000,ct=0,dt=0;
 cin>>a[0];
 y=a[0];
 for(int i=1;i<x;i++){cin>>a[i];
 y=__gcd(y,a[i]);
 }
 if(y==1 or (x==1 and a[0]==1))cout<<0<<endl;
 else if(x==1 and a[0]!=1)cout<<1<<endl;
 else{
    int m=a[x-1];
    a[x-1]=x;
    rep{
    if(a[i]%x==0)ct++;
    }
    if(ct==x){
    a[x-1]=m;
    a[x-2]=x-1;
    rep{
        if(a[i]%(x-1)==0)dt++;
    }
    if(dt==x)cout<<2<<endl;
    else cout<<3<<endl;
    //else cout<<1<<endl;
    }
 }

}
return 0;
}