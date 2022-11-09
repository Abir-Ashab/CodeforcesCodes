#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,c=0;
    cin>>x;
    while(x--)
    {
    cin>>y;
    int a[10000];
    for(int i=0;i<y;i++)
    {
        cin>>a[i];
    }
    sort(a,a+y);
    for(int i=1;i<y;i++)
    {
        if(a[i]-a[i-1]>1){c++;cout<<"NO"<<endl;break;}
    }
     if(c==0)cout<<"YES"<<endl;
     c=0;
    }
}
