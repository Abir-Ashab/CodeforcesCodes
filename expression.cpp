#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    int x=a+b*c;
    int y=a*(b+c);
    int z=a*b*c;
    int p=(a+b)*c;
    int o=a+b+c;

    int q=max(x,y);
    int r=max(y,z);
    int t=max(z,p);
    int s=max(q,r);
    int m=max(r,t);
    int n=max(s,m);
    int l=max(n,o);

    cout<<l<<endl;
}
