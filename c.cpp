#include<bits/stdc++.h> 
using namespace std;
#define m 1000003

long long int f[m];

// function to calculate modular mutiplicative inverse of a long long 
long long int bigmod ( long long int a, long long int p) { 
    long long int res = 1; 
    long long int x = a; 
    while ( p ) { 
        if ( p & 1 ) { 
            res = ( res * x ) % m;
        }
        x = ( x * x ) % m; p = p >> 1; 
    } return res;
}

int main() { 
long long int i;

// precompute the factorials of all number

f[0]=1; for(i=1;i<m;i++){ f[i]=(((i%m)*(f[i-1]%m))%m); }

long long int t,c=0;

scanf("%lld",&t);
while(t--)
{
    long long int n,r,x,y,z,ans,res;
    scanf("%lld %lld",&n,&r);

    //modular multiplication of r! and (n-r)!
    x=((f[n-r]%m)*(f[r]%m))%m;

    //modular multiplicative inverse of x
    y=bigmod(x,m-2);

    //modular multiplication of n! and y
    z=((f[n]%m)*(y%m))%m;

    printf("Case %lld: %lld\n",++c,z);
}
return 0;
}