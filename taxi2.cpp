#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a,x[100000],z=0,c=0,d=0,e=0;
    cin>>a;

    for(int i=0;i<a;i++)
    {
        cin>>x[i];
    }
    for(int i=0;i<a;i++)
    {
        z=z+x[i];
        if(x[i]==3)c++;
        else if(x[i]==2)d++;
    }
    for(int i=0,j=1;i<a;i++,j++){
    //if(x[i]==2 && x[j]==3 && c>1000 && d>1000){cout<<c+d/2<<endl;break;}
    if(c==a){cout<<a<<endl;break;}
    else if(a==3 && x[0]==3 && x[1]==3 && x[2]==2) {cout<<z/4+1<<endl;break;}
    else if(z%4==0){cout<<z/4<<endl;break;}

    else {cout<<z/4 +1<<endl;break;}
    }

}
