#include<bits/stdc++.h>
using namespace std;

int main()
{
    int c=0,t;
    int x[1000];

    cin>>t;

    for(int i=0;i<t;i++)
    {
        cin>>x[i];
    }
    sort(x,x+t);

    for(int i=0;i<t;)
    {
     if(x[t-1]!=x[i]){c++;x[i]++;}
     else {i++;}
    }
    cout<<c;
}
