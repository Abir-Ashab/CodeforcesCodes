#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,t;
cin>>x>>t;

for(int i=pow(10,x-1);i>0;i++){
    if(i%t==0){cout<<i;break;}
}
return 0;
}