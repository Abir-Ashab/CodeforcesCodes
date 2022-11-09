#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x[100],y[100],test,c=0,b=0;

    cin>>test;

    while(test--)
    {
    for(int i=0;i<2;i++)
    {
        cin>>x[i];
        if(x[i]==1)c++;
    }
    for(int i=0;i<2;i++)
    {
        cin>>y[i];
        if(y[i]==1)b++;
    }
    if(c==0 && b==0)cout<<0<<endl;
    if(c==1 && b==1)cout<<1<<endl;
    if(c==2 && b==2)cout<<2<<endl;
    if((c==2 && b==0) ||(c==0 && b==2) )cout<<1<<endl;
    if((c==1 && b==0) ||(c==0 && b==1) )cout<<1<<endl;
    if((c==2 && b==1) ||(c==1 && b==2) )cout<<1<<endl;
    b=0;
    c=0;
    }
}
