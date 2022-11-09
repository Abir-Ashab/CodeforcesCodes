#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,y,m=1;
    cin>>test;
    pair<int,int>x[10000];

    for(int i=1,k=0;i<=1000;)
    {
        for(int j=m;j<=2000;j++)
        {
            if(j!=3 && j%3!=0 && j%10!=3){x[k].first=i;x[k].second=j;m++;k++;i++;continue;}
        }
    }
    while(test--)
    {
        cin>>y;
        for(int j=0;j<1000;j++)
        {
            if(y==x[j].first){cout<<x[j].second<<endl;break;}
        }
    }
}
