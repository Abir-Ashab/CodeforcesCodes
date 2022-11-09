#include<bits/stdc++.h>
using namespace std;

int main()
{
    int s[1000]={4,7,47,74,444,477,474,744,747,777},x,c=0;
    cin>>x;

    for(int i=0;i<10;i++)
    {
        if(x%s[i]==0)c++;
    }
    if(c>=1)cout<<"YES";
    else cout<<"NO";
}
