#include<bits/stdc++.h>
using namespace std;
 
int main()
{
long long int test,x,y,z;
cin>>test;

for(int i=1;i<=test;i++){
    cin>>x>>y>>z;

    if((x+y+z)%3==0 && (x+y+z)>=3)cout<<"Case "<<i<<": Peaceful"<<endl;
    else cout<<"Case "<<i<<": Fight"<<endl;
}
}