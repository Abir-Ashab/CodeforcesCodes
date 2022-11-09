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
 string s;
 ll cq=0,ca=0;
 cin>>s;
 for(int i=0;i<x;i++){
 if(s[i]=='Q')cq++;
 else if(s[i]=='A')ca++;
 if(ca>cq){
    ca=cq;
 }
 }
 if(cq>ca)cout<<"No"<<endl;
 else cout<<"Yes"<<endl;
}
return 0;
}