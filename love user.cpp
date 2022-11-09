#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int x,k=0;
        int c=0;
        cin>>x;
        int a[x];

        for(int i=0;i<x;i++)
        {
            cin>>a[i];
        }

        for(int j=x-1;j>=0;j--)
        {
         for(int i=0;i<x-1;i++)
         {
             if(a[j]>a[i])k++;
         }
         cout<<k<<endl;
         if(k==j && k!=0)c++;
         k=0;
        }

         /*for(int j=x-1;j>=0;j--)
        {
         for(int i=0;i<x-1;i++)
         {
             if(a[j]<a[i])k++;
         }
         if(k==j && k!=0)c++;
         k=0;
        }*/
        //cout<<c;
    }
