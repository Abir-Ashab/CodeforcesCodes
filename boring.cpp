#include<bits/stdc++.h>
using namespace std;

int main()
{
    int sum=0,test;
    int x;
    cin>>test;

    while(test--)
    {
     cin>>x;
     if(x==1)cout<<1<<endl;

     else if (x>=11)
     {
         int z=x%10;
         sum=10*(z-1);
         if(x<111){
         for(int i=1;i<=2;i++)
         {
             sum+=i;
         }
         cout<<sum<<endl;
         }
         if(x<1111 && x>=111){
         for(int i=1;i<=3;i++)
         {
             sum+=i;
         }
         cout<<sum<<endl;
         }
         if(x<11111 && x>=1111){
         for(int i=1;i<=4;i++)
         {
             sum+=i;
         }
         cout<<sum<<endl;
         }
     }
     else {sum=10*(x-1);
           sum++;
         cout<<sum<<endl;}
    }

}
