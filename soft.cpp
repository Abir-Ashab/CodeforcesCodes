#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,l,c,d,p,nl,np,x;

    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    x=min(min(k*l/nl,d*c),p/np);

    cout<<x/n;
}
