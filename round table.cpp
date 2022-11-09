#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long n,t,a,r;

    cin>>t;
    while(t--)
    {
        vector<int>v;
        r=1;
        cin>>n;
        while(n!=0)
        {
            r=r*10;
            a=n%r;
            n=n-a;
            if(a!=0)
                v.push_back(a);
        }
        cout<<v.size()<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
}
