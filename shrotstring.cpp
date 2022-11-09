#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x,c=0;
    string s;

    cin>>x;
    while(x--)
    {
        cin>>s;
        cout<<s[0];

        for(int i=1;i<s.size();i+=2)
        {
           cout<<s[i];
        }
        cout<<endl;
    }

}
