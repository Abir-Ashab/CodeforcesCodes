#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,sum1=0,sum2=0, a[1000];
    cin>>test;

    for(int i=0;i<test;i++)
    {
        cin>>a[i];
    }
    sort(a,a+test);
    for(int i=0;i<test;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<test;i+=2)
    {
       sum1+=a[i];
    }
    for(int j=1;j<test;j+=2)
    {
     sum2+=a[j];
    }
    if(sum1<=sum2)
    cout<<sum2<<" "<<sum1;
    else
    cout<<sum1<<" "<<sum2;
}
