#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mx = 1e5 + 123;
vector<pair<int, int>> adj[mx];
ll dist[mx];

void dijkstra(int s, int n)
{
    for (int i = 0; i <= n; i++)
        dist[i] = INT_MAX; /// initilization
    dist[s] = 0;         /// initilizing source distance
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    pq.push({0, s}); /// pushing source in queue

    while (!pq.empty())
    {
        int u = pq.top().second;
        ll curD = pq.top().first;
        pq.pop();

        if (dist[u] < curD)
            continue; // important

        for (auto p : adj[u])
        {
            int v = p.first;
            ll w = p.second;
            if (curD + w < dist[v])
            { // relax operation
                dist[v] = curD + w;
                pq.push({dist[v], v});
            }
        }
    }
}

int main()
{
    int src; cin >> src;
    int t; cin >> t;
    map<string, int>mp;
    int ind = 1;
    while(t--) {
    string s; cin >> s;
    mp[s] = ind;
    ind++;
    int n; cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int u = ind, v, w;
        cin >> v >> w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    dijkstra(src, n);
    }
    

    for (int i = 0; i < n; i++)
        cout << dist[i] << " ";
    cout << '\n';

    return 0;
}