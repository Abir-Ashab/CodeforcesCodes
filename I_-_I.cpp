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
ll t;
    t = 1;
    cin >> t;
    while(t--)
    {
        ll n, m;
        cin >> n >> m;
        ll x = max(n, m);
        ll y = min(n, m);
        cout << (x - 1) * y + y << endl;
    }
}