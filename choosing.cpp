#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,x[10000],c=0;
    cin>>a>>b;

    for(int i=0;i<a;i++)
    {
        cin>>x[i];
        if(x[i]+b<=5)c++;
    }
    cout<<c/3;
}
