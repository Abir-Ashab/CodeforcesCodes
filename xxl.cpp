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
int a[N];
a[0]=0;
for(int i=1,j=2;i<=10;i+=2,j+=2){
   a[i]=j;
   a[j]=i;  
}
for(int i=1;i<=10;i++)cout<<a[i]<<' ';
}
