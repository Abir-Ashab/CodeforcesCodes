#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main()
    {
        int x,y,c=0;
        pair<int,int> a[10000];

        cin>>x>>y;

        for(int i=0;i<y;i++)
         {
             cin>>a[i].first;
             cin>>a[i].second;
         }
         sort(a,a+y);

         for(int i=0;i<y;i++)
         {
             if(x>a[i].first)
             {
                 x=x+a[i].second;
                 c++;
             }
         }
         if(c==y)cout<<"YES";
         else cout<<"NO";
    }
