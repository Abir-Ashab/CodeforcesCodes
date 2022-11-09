#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,ct=0,bt=0;
cin>>x>>y;

for(int i=1;i<=x;i++){
   if(y/i<=x && y%i==0)ct++;
}
cout<<ct;
}
