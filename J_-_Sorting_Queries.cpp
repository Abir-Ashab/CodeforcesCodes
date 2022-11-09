#include <bits/stdc++.h>
using namespace std;

int main()
{
    multiset<int> st;
    queue<int> A;
    int test;
    cin >> test;
    for (int i = 0; i < test; i++)
    {
        int c;
        cin >> c;
        if (c == 1)
        {
            int x;
            cin >> x;
            A.push(x);
        }
        if (c == 2)
        {
            if (!st.empty())
            {
                cout << *st.begin() << endl;
                st.erase(st.begin());
            }
            else
            {
                cout << A.front() << endl;
                A.pop();
            }
        }
        if (c == 3)
        {
            while (!A.empty())
            {
                int x = A.front();
                A.pop();
                st.insert(x);
            }
        }
    }
}