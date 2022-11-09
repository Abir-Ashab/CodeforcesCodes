#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) (x.begin(), x.end())
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int test,x,y,z;
cin>>test;
while (test--)
{
    cin>>x>>y>>z;
    if(x==1){cout<<1<<endl;}
    else if((abs(x-1))==(abs(y-z)+(z-1)))cout<<3<<endl;
    else if((abs(x-1))<(abs(y-z)+(z-1)))cout<<1<<endl;
    else if((abs(x-1))>(abs(y-z)+(z-1)))cout<<2<<endl;
}

}