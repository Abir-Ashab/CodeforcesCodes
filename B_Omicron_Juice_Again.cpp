#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR for(int i=0;i<x;i++)
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) x.begin(), x.end()
const int N=1e5+123;
#define PQ priority_queue
 
int main()
{
Fast(input);
int test,x,y,z,k;
scanf("%d",&test);

for(int i=1;i<=test;i++){
    scanf("%d%d%d%d",&x,&y,&z,&k);
    int a=(x+y+z)/3;
    if( abs(x-a)%k==0 && abs(y-a)%k==0 && abs(z-a)%k==0 && (x+y+z)%3==0) printf("Case %d: Peaceful\n",i);
    else printf("Case %d: Fight\n",i);
}
}