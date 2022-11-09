#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,y;
    cin>>x>>y;

   if(x>=y)
   {
       cout<<y<<" ";
       x=x-y;
       cout<<x/2;
   }
   else
    {
    cout<<x<<" ";
    y=y-x;
    cout<<y/2;
    }
}
