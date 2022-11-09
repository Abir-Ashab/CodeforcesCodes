#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,i=0,j=0,k=0,l=0;
    char x[1000][1000];
    cin>>a;

    for(int i=0;i<a;i++)
    {
        for(int j=0;j<8;j++)
        {
            for(int l=0;l<8;l++){
            cin>>x[j][l];
            }
            /*for(int k=0;k<8;k++)
            {
               if(x[j][k]=='#' && x[j][k]==x[j+1][k-1] && x[j+1][k-1]==x[j+1][k+1] && x[j][k]==x[j-1][k-1] && x[j-1][k-1]==x[j-1][k+1]){
               j++;
               k++;
               }
            }*/

        }

    }
     if(x[3][2]=='#' && x[3][2]==x[4][1] && x[4][1]==x[4][3] && x[3][2]==x[2][1] && x[2][1]==x[2][3])
            {
                j=4;
                k=3;
            }
     cout<<j<<" "<<k<<endl;

}
