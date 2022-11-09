#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    int test,num=0,z;
    cin>>test;
    set<char>s1;

    while(test--)
    {
        cin>>z;
        cin>>s;
        for(int i=0;i<s.size();i++)
        {
          s1.insert(s[i]);
        }
        num=s1.size();
        cout<<num*2+(s.size()-s1.size())<<endl;
        s1.erase(s1.begin(), s1.end());
        num=0;
    }
}
