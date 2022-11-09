#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin>>s;
    int cnt=0;


    for(int i=0;i<s.length();i++)
    {
        if(s[i]<='Z')
            cnt++;
    }
    if(cnt==s.length())
    {for(int i=0;i<s.length();i++)
    {if(s[i]<='Z')
    {s[i]=s[i]+32;
    cout<<s[i];}
    else cout<<s[i];
    }
    }

    else if(cnt==s.length()-1 && s[0]>'Z')
    {
    s[0]=s[0]-32;
    for(int i=0;i<s.length();)
    {
    cout<<s[i];
    i++;
    if(s[i]<='Z'){
    s[i]=s[i]+32;
    }
    else s[i]=s[i];
    }
    }
    else cout<<s;
}
