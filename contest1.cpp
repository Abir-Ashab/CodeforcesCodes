#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x[10000],c=0;
    cin>>a;

    for(int i=1;i<=a;i++)
    {
        for(int j=0,k=1;j<4;j++,k++)
        {
            cin>>x[j];
        }
        for(int k=0;k<4;k++){
        if(x[k+1]>x[0])c++;}
        cout<<c<<endl;
        c=0;
    }

}
