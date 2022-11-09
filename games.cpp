#include<bits/stdc++.h>
using namespace std;

int main()
   {
        int n,j,i,cn=0;
        cin>>n;
        int a[n],b[n];

        for ( i=0; i<n; i++) {cin>>a[i]>>b[i];}

        for (i=0; i<n; i++)
        {
          for( j=0; j<n; j++)
            {
                 if ( i!=j && a[i]==b[j]) cn++;
            }
        }

        cout<<cn<<endl;

        return 0;
   }
