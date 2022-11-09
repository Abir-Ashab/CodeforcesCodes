#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int test;
    cin>>test;

    while(test--)
    {
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
            s[i]=tolower(s[i]);
        }
        if(s=="yes")cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}
