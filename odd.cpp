#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int test,x;
    cin>>test;

    while (test--)
    {
        cin>>x;
        while(1)
        {
        if(x%2==0){x=x/2;}
        else if(x==1){break;}
        else break;
        }
        if(x==1)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
    
return 0;
}