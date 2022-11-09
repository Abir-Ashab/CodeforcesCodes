/*
 int test = 1 , tc = 0 ;
    Int(test) ;
    while (test--) {
        string s[8] ; 
        bool b = 0, r = 0 ;
        for(int i = 0 ; i < 8 ; ++i){
            cin >> s[i] ; 
            int cnt = count(s[i].begin(), s[i].end(), 'R') ; 
            if(cnt == 8)
                r = 1 ; 
        }
        puts(r ? "R" : "B") ; 
    }
*/
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
while (test--) {
        string s[8] ; 
        bool b = 0, r = 0 ;
        for(int i = 0 ; i < 8 ; ++i){
            cin >> s[i] ; 
            int cnt = count(s[i].begin(), s[i].end(), 'R') ; 
            if(cnt == 8)
                r = 1 ; 
            }
        if(r==0)cout<<'B'<<endl;
        else cout<<'R'<<endl;
        }
}