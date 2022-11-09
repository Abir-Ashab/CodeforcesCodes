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
string s;
cin>>s;
int best=0;
for(int a=0;a<s.length();a++){
    int sum=0;
    for(int b=a;b<s.length();b++){
        sum+=s[b];
        best=max(best,sum);
    }
}
cout<<best;
}
