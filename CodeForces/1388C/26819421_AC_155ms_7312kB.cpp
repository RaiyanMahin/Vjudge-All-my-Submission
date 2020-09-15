#include<bits/stdc++.h>
using namespace std;
//using ll = long long;
//#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)

const int N = 1e5+7;
int p[N], par[N] , h[N], g[N];
vector < int > adj[N];
bool good = true;
void dfs(int u, int pp)
{
    par[u] = pp;
    int sum = 0;
    for(auto v : adj[u])
    {
        if(v == pp)
            continue;
        dfs(v,u);
        p[u] += p[v];
        sum += g[v];
    }
    if((p[u] - h[u]) % 2)
        good = false;
    else
    {
        int gg = (p[u] + h[u]) / 2;
        int bb = (p[u] - h[u]) / 2;
        if(gg < 0 or gg > p[u])
            good = false;
        g[u] = gg;
        if(g[u] < sum)
            good = false;
    }

}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,m; cin >> n >> m;
        for(int i = 1; i <= n ; i++)
        {
            adj[i].clear();
        }
        for(int i = 1; i <= n; i++)
        {
            cin >> p[i];
        }
        for(int i = 1; i <= n; i++)
        {
            cin >> h[i];
        }
        for(int i = 1; i < n; i++)
        {
            int u , v; cin >> u >> v;
            adj[u].push_back(v);
            adj[v].push_back(u);
        }
        good = true;
        dfs(1, 0);
        if(good)
            puts("YES");
        else
            puts("NO");
    }

}
