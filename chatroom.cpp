#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t="hello";
    cin>>s;
    int j=0,k=0;

    for(int i=0;i<s.length();i++)
    {
        if(s[i]==t[j])
        {
            j++;
            k++;
        }
    }

    if(k==5)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}
