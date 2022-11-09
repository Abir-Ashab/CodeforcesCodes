#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y,test,a[10000],k=0;
    string s;
    cin>>test;

    while(test--)
    {
        cin>>x;
        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }
        while(x--){
        cin>>y;
        cin>>s;
        int j=k;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='D')
            a[j]++;

            if(s[i]=='U')
            a[j]--;

            if(a[j]==10)a[j]=0;
            if(a[j]==-1)a[j]=9;
            if(a[j]==0)a[j]=0;
        }

        cout<<a[j]<<endl;
        k++;
        }
        k=0;
    }
}
