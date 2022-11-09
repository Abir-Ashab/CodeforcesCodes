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
int test,x;
cin>>test;
while (test--)
{
    cin>>x;
    cout<<1<<' ';
    for(int i=x;i>1;i--)cout<<i<<' ';
    cout<<endl;
}

}