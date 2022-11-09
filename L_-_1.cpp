#include <bits/stdc++.h>
using namespace std;
 int main()
{
 long long x,y = 100, countt = 0;;
cin >> x;
 while(y < x){
y += y / 100;
countt++;
}
cout << countt << endl;
return 0;
}