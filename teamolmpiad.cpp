#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,a[10000],t[10000],b=0,c=0,d=0,j=0;
    cin>>x;

    for(int i=0;i<x;i++)
    {
        cin>>a[i];
    }
    //sort(a,a+x);

    for(int i=0;i<x;i++)
    {
     if(a[i]==1){b++;}
      if(a[i]==2){c++;}
       if(a[i]==3){d++;}
    }
    if(b>0 && c>0 && d>0)
    {
    cout<<(b+c+d)/3<<endl;

    for(int i=0;i<x;i++)
    {
      for(int j=0;j<x;j++)
      {
        for(int k=0;k<x;k++)
        {
            if(a[i]!=a[j] && a[j]!=a[k] && a[i]+a[j]+a[k]==6){cout<<i+1<<" "<<j+1<<" "<<k+1<<endl;
            b--;c--;d--;
            }
        }
      }
    }
    }
     else cout<<0<<endl;
}
