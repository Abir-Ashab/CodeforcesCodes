#include<bits/stdc++.h>
using namespace std;

int main()
    {
        int x,y;
        cin>>x>>y;

        for(int i=1;i<=x;i++)
        {
            if(i%2!=0)
            {
                for(int j=1;j<=y;j++)
                {
                    cout<<"#";
                }
                cout<<endl;
            }
            else if(i%2==0 && i%4!=0)
            {
                for(int j=1;j<=y;j++)
                {
                    if(j==y){
                    cout<<"#";
                    break;
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
             else if(i%2==0 && i%4==0)
            {
                for(int j=1;j<=y;j++)
                {
                    if(j==1){
                    cout<<"#";
                    }
                    else cout<<".";
                }
                cout<<endl;
            }
    }
    }
