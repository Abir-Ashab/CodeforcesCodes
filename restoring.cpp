#include<bits/stdc++.h>
using namespace std;

int main()
{
int x,b,c,z;
vector<int>a;

for(int i=0;i<4;i++)
{
    cin>>z;
    a.push_back(z);
}
sort(a.begin(),a.end());

b=(a[0]-(a[2]-a[1]))/2;
c=a[1]-b;
x=a[2]-c;

cout<<x<<" "<<b<<" "<<c;
}
