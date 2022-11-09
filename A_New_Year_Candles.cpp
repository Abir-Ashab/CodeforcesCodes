#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,ct,ctt;
cin>>x>>y;

ct=x;
ctt=0;
x=0;

while(ct>=1){
    x+=ct;
    ctt+=ct;
    ct=ctt/y;
    ctt=ctt%y;
    
}

cout<<x;

return 0;
}