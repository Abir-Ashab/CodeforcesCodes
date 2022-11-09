#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int c=0,d=0;
    for(int i=0;i<100;i++)
    {
        if(s[i]=='0')
        {
            c++;
            if(c==7){cout<<"YES"<<endl; break;}
            else continue;
        }

        else c=0;
    }
    for(int i=0;i<100;i++)
    {
        if(s[i]=='1')
        {
            d++;
            if(d==7){cout<<"YES"<<endl;break;}
            else continue;
        }

        else d=0;
    }
    if(c<7 && d<7)cout<<"NO"<<endl;
}
