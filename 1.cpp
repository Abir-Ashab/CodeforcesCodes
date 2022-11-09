#include<bits/stdc++.h>
using namespace std;

int main()
{
int x,y,z,a,ans=0,b=0,c=0;
cin>>x>>y>>z;

b=x+y*z;
c=x*(y+z);
int d=max(b,c);

int m=x*y*z;
int n=(x+y)*z;
int e=max(m,n);

int f=max(d,e);
int g=x+y+z;;
int i=max(f,g);

int j=(x*y)+z;
ans=max(i,j);
cout<<ans;
}
