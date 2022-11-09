#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,a[1000],max,k=0,sum1=0,sum2=0;
    cin>>n;

    for(int i=0;i<n;i++)
        cin>>a[i];

        int i=0,j=n-1;

    while(i<=j)
    {
        if(a[i]>=a[j])
        {
           max=a[i];
           i++;
        }
        else{
            max=a[j];
            j--;
        }

        if(k%2==0)
         sum1+=max;
        else
         sum2+=max;
         k++;
    }
      cout<<sum1<<" "<<sum2;
}
