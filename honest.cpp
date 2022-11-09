#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,a[1000],num,z,y,mini;

    cin>>test;

    while(test--)
        {
            cin>>num;
            for(int i=0;i<num;i++)
            {
                cin>>a[i];
            }
            sort(a,a+num);

            mini=a[num-1]-a[num-2];

            for(int i=0;i<num;i++)
            {
                z=a[i+1]-a[i];
               if(z<mini)mini=z;
               else continue;
            }
            cout<<mini<<endl;
            mini=0;
        }
}
