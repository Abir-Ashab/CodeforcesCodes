#include<bits/stdc++.h>
#include <iostream>
#include <algorithm>

using namespace std;
int main()
{
    int x,ct=0;
    cin>>x;

    for(int i=1;i<=x;i++){
        for(int j=1;j<=x;j++){
            for(int k=1;k<=x;k++){
                ct +=__gcd(__gcd(i,j),k);
            }
        }
    }
    cout<<ct;
return 0;
}