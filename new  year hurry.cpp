#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int x,y,c=0,sum=0;

        cin>>x>>y;

        for(int i=1;i<240;i++)
        {
            sum=sum+i*5;
            if(sum+y<=240 && c<x)c++;
        }
        cout<<c;
    }
