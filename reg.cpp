#include<bits/stdc++.h>
using namespace std;

int main()
{
   int x;
   string s;

   map<string,int> reg;
   cin>>x;

   for(int i=0; i<x; i++)
   {
       cin>>s;
       if(reg[s]==0)//default man hocche 0
       {
           reg[s]=1;
           cout<<"OK"<<endl;
       }
       else
       {
         cout<<s<<reg[s]<<endl;
          reg[s]++;
       }
   }

}
