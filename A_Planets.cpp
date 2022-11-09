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
//set<int> s1;
int test,n,c,a[105];
cin>>test;
while(test--){
cin>>n>>c;
		map<int,int>cnt;
		for(int i=1;i<=n;i++){
			cin>>a[i];
         cnt[a[i]]++;
		}
		int ans=0;
		for(auto p:cnt)ans+=min(c,p.second);
		cout<<ans<<endl;
}

}