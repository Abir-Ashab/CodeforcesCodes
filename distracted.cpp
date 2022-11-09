#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,num,count1=0;
    string s;
    cin>>test;

    while(test--)
    {
        cin>>num;
        cin>>s;

        for(int i=0;i<num;i++)
        {
            if(s[i]!=s[i+1])
            {
            for(int j=i+1;j<num;j++)
            {
                if(s[i]==s[j]){count1++;break;}
            }
            }
        }
         if(count1!=0){cout<<"NO"<<endl;}
         else cout<<"YES"<<endl;
         count1=0;
    }
}
