#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, p;
    cin >> n >> p;
    int min(p), max(p), amazing(0);
    while (--n)
    {
        cin >> p;
        if (p< min)
        {
            min = p;
            ++amazing;
        }
        if (p > max)
        {
            max = p;
            ++amazing;
        }
    }
    cout << amazing << endl;
}
