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
    for(int i=0;i<y;i++)
    {
        if(a[i+1]-a[i]>1){c++;}
    }
    if(c==0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    c=0;
    }
}
