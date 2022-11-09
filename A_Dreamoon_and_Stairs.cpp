#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,t;
cin>>x>>t;


if(x<t){cout<<"-1";}
else if(x%2==0 && (x/2)%t==0){cout<<x/2;}

else {
    
    for(int z=(x/2)+1;z<10000;z++){
   if(z%t==0){cout<<z;break;}
}
}
return 0;
}