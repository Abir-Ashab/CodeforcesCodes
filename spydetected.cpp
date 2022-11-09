#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,a[1000],c=0;

    cin>>x;

    while(x--)
    {
        cin>>y;
        for(int i=0;i<y;i++)
        {
            cin>>a[i];
        }
        //sort(a,a+y);
        for(int i=0;i<y;i++)
        {
            if((a[i]!=a[i+1]&& a[i]!=a[i-1]&& i>=1)|| (a[i]!=a[i+1]&& a[i+1]==a[i+2])){cout<<i+1<<endl;break;}
        }
    }
}
