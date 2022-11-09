#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i,x) for(int i=1;i<=x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=2e5+123;
#define PQ priority_queue
 int a[N],b[N],p[N];
int main()
{
Fast(input);
int x;
cin>>x;
fo(i,x)cin>>p[i];
fo(i,x)cin>>a[i];
fo(i,x)cin>>b[i];

PQ<int,vector<int>>q[5][5];

fo(i,x)q[a[i]][b[i]].push(p[i]);

int m;
cin>>m;

while(m--){
    int c;
    cin>>c;

    int ans=INT_MAX,f,b;

    for(int i=1;i<=3;i++){
        if(!q[c][i].empty() && q[c][i].top()<ans){
            ans=q[c][i].top();
            f=c,b=i;
        }
    }
    for(int i=1;i<=3;i++){
        if(!q[i][c].empty() && q[i][c].top()<ans){
            ans=q[i][c].top();
            f=i,b=c;
        }
    }
    if(ans==INT_MAX)ans=-1;
    else q[f][b].pop();

    cout<<ans<<" ";
}
cout<<endl;
}