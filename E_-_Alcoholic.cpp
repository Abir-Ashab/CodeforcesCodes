#include<bits/stdc++.h>

int main()
{
    long long n,x,ct=0;
	cin>>n>>x;
	long long sum=0;
	for(int i=0;i<n;i++){
		long long a,b;
		cin>>a>>b;
		sum+=a*b;
		if(sum>x*100){
			cout<<i+1;
            ct++;
		}
	}
    if(ct==0)cout<<"-1";
}