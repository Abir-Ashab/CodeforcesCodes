#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,a,b;
cin>>x>>a>>b;

a=x-a;
if(a==b || a<=1 ||b>=a)cout<<a;
else cout<<b+1;
return 0;
}
// n - max(a + 1, n - b) + 1.