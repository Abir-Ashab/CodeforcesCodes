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
int test,len;
string s;
cin>>test;

while(test--){
    cin>>len;
    cin>>s;
 ll cnt=0;
    for (int i = 0; i < len;i++) {
       if((i!=len-1)&&s[i+2]=='0' && s[i+3]!='0' && s[i]=='1'){
        cnt=(s[i+1]-'0')+106;
         
        char ch = (char)cnt;
            cout << ch;
            i+=2;
       }
       else if((i!=len-1)&&s[i+2]=='0' && s[i+3]!='0' && s[i]=='2'){
        cnt=(s[i+1]-'0')+116;
          char ch = (char)cnt;
        cout << ch;
        i+=2;
       }
       else{cnt=(s[i]-'0')+96;
         char ch = (char)cnt;
         cout << ch;
            }

    }
    cout<<endl;
}
}