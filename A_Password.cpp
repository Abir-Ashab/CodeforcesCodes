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
    int a;
    for(int i=0;i<x;i++)cin>>a;

    if(x==9)cout<<0<<endl;
    else if(x==1)cout<<216<<endl;
    else if(x==2)cout<<168<<endl;
    else if(x==3)cout<<126<<endl;
    else if(x==4)cout<<90<<endl;
    else if(x==5)cout<<60<<endl;
    else if(x==6)cout<<36<<endl;
    else if(x==7)cout<<18<<endl;
    else if(x==8)cout<<6<<endl;
    //else if(x==1)cout<<216<<endl;
}

}