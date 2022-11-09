
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x=0,a[100];

    for(int i=0;i<3;i++)
    {
        cin>>a[i];
    }
    sort(a,a+3);
    x=(a[2]-a[1])+(a[1]-a[0]);
    cout<<x;
}
