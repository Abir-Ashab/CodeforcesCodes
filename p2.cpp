#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<char>s1;
    int test,result=0,z=0;
    string s;

    cin>>test;
    while(test--)
    {
        cin>>s;
         if((s.size()<=3) || (s.size()==4 && (s[s.size()-1]==s[1] || s[s.size()-1]==s[0] || s[s.size()-1]==s[2]))){cout<<1<<endl;}
         else
        {
        for(int i=0;i<s.size();i++)
        {
          s1.insert(s[i]);
          z=s1.size();
          if(z%3==0){result++;s1.erase(s1.begin(), s1.end());}
          //cout<<z<<" ";
          if(z==1 && (i==s.size()-1))result++;
          }
        cout<<result<<endl;
         }
         result=0;
    }
}
