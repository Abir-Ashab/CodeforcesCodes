#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long test,x,round,z,y;
    cin>>test;

    while(test--)
    {
        cin>>x;
        if(x<10){cout<<x-1<<endl;}
        for(int i=1;i<100;i++)
        {
            z=x/pow(10,i);

            if(z>=1 && z<10){y=(int)x-pow(10,i);cout<<y<<endl;break;}
        }
    }
}
