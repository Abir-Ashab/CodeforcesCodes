#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n,a,p,q;
    cin>>m>>n>>a;

    if(m%a==0)x=m/a;
    else x=m/a+1;

    if(n%a==0)y=n/a;
    else y=n/a+1;

    cout<<x*y<<endl;
}
