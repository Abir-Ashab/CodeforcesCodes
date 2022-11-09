#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,z=0,m;
    cin>>m;

for(x=4;x<1000000;x++)
{
    if(x!=5 && x!=7 && (x%2==0|| x%3==0 ||x%4==0 || x%5==0|| x%6==0 ||x%7==0 || x%8==0|| x%9==0)&& z!=m)
    {
         for(y=4;y<1000000;y++)
         {
                if(y!=5 && y!=7 && (y%2==0|| y%3==0 ||y%4==0 || y%5==0|| y%6==0 ||y%7==0 || y%8==0|| y%9==0) && z!=m)
                {
                    z=x+y;
                }
                if(z==m)break;
         }
    }
    if(z==m)break;
}
cout<<x<<" "<<y;
}
