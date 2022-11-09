#include<bits/stdc++.h>
using namespace std;

int main()
{
    pair<int,int>game;

    int num,sum1=0,sum2=0;
    cin>>num;

    while(num--)
    {
        cin>>game.first>>game.second;
        if(game.first>game.second)sum1++;
        else if(game.first<game.second) sum2++;
    }
    if(sum1>sum2)cout<<"Mishka";
    else if(sum1<sum2)cout<<"Chris";
    else cout<<"Friendship is magic!^^";
}
