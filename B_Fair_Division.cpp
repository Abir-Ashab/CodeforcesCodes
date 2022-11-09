#include<bits/stdc++.h>
using namespace std;
int main()
{
int test,n,a,x=0,y=0,z;
cin>>test;
while(test--){
    cin>>n;
    z=n;
    while(n--){
        cin>>a;
      if(a==1)x++;
      y+=a;
    }
  if((y%2==0 && x>=2)||(z%2==0 && x==0))cout<<"YES"<<endl;
  else cout<<"NO"<<endl; 
  y=0,x=0;
}
return 0;
}