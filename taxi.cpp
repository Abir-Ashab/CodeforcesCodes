#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x[100000],z=0,c=0;
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<a;i++)
    {
       if(x[i]==4)c++;
       if(x[i]<4){
       for(int j=1;j<a;j++)
       {

           z=z+x[i]+x[j];
           if(z==4)c++;
           else if(z==3 && x[i]!=1 && x[j]!=1)c++;
           }
       }
    }
    cout<<c<<endl;
}
