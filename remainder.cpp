#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long int test,x,y,z;
	cin>>test;
	while(test--)
    {
    cin>>x>>y>>z;
    long long ans = 0;
    ans = z - z % x + y;

        if(ans <= z)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<(z - z % x - (x - y))<<endl;
        }
    }
}
