#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int,greater<int> > s1;
    int test,num,x,z;

    cin>>test;
    while(test--)
    {
        cin>>num;
        for(int i=0;i<num;i++)
        {
            cin>>x;
            s1.insert(x);
        }
    auto itr1=s1.begin(),itr2=s1.end();
    itr2--;
    z=*itr1-*itr2;
    cout<<z<<endl;
    s1.erase(s1.begin(), s1.end());
    z=0;
    }

}
