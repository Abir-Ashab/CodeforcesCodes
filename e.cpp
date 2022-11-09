#include<bits/stdc++.h>
using namespace std;
long long t,a,b,n=0,i;
int x[1000000],y[1000000];

int main()
{
    cin>>t;
    for(i=0;i<t;i++)
    {
        cin>>x[i];
        cin>>y[i];
    }
    for(i=0,n=1;i<t;n++)
    {
        a=x[i];
        b=y[i];
       if(n%a==b%n){cout<<n<<endl;i++;}
    }
}
