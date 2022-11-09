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
int test;
    cin >> test;

    while (test--) {
        int a, b; 
        cin >> a >> b;
        if (b == 1) {
            cout << "NO" << endl;
        } 
        else {
            cout << "YES" << endl;
            cout << a << ' ' << a * (long long)b << ' ' << a * (long long)(b + 1) << endl;
        }
    }
}
