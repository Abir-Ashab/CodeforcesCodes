#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define Fast(input) ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define Iterator vector<int>v::iterator
#define It set<int>v::iterator
#define all(x) (x.begin(), x.end())
const int N=1e5+123;
#define PQ priority_queue
int m[100],j=0;

int main()
{
Fast(input);
int test,x,a[1000];
int cnt=0,maxx=0,y=0;
cin>>test;
while (test--)
{
    cin>>x;
    for(int i=0;i<x;i++)a[i]=i+1;

  do {  
  for (int i = 0; i <x; i++) {
     if(a[i]>y)y+=a[i];
     else y=0;
  }
  m[j]=y;
  j++;
  y=0;
  }
  while (next_permutation(a, a + x));

  for(int i=0;i<j;i++)cout<<m[i]<<" ";

  cout<<endl;
}
}