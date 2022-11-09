#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,m=0,x[10000];

    cin>>a;
    for(int i=0;i<a;i++)
    {
        for(int j=0;j<3;j++)
        {
            cin>>x[j];
            m=m+x[j];
        }
        if(x[1]==0 && x[2]==0)m++;
    }
    if(m==0) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
