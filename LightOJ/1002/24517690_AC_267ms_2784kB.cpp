#include <bits/stdc++.h>
using namespace std;
using ll = int;
const int mx = 1e5 + 4;
vector < ll > vote[700] , cost[700];
ll dis[700] = {0};
#define INF 100009
void bfs(ll s)
{
    queue<ll > qi;
    qi.push(s);
    dis[s] = 0 ;
    ll p, tmp, x,z;
    while(!qi.empty())
    {
        p = qi.front();
        qi.pop();
        z = vote[p].size();
        for(ll i = 0 ; i <= z - 1; i++)
        {
            x = vote[p][i];
            tmp = max(dis[p], cost[p][i]);
            if(tmp < dis[x])
            {
                dis[x] = tmp;
                qi.push(x);
            }

        }
    }

}
int main()
{
    ll t,n,m,u,v,w,cas = 1, T ; cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(ll i = 0; i <= ( m - 1); i++)
        {
            cin >> u >> v >> w;
            vote[u].push_back(v);
            vote[v].push_back(u);
            cost[u].push_back(w);
            cost[v].push_back(w);

        }
        cin >> T;
        for(ll i = 0 ; i <= n - 1; i++)
            dis[i] = INF;
        bfs(T);
        cout << "Case " << cas++ << ":" << '\n';
        for(ll i = 0 ; i <= n - 1; i++)
        {
            if(dis[i] == INF)
                cout << "Impossible" << '\n';
            else
                cout << dis[i] << '\n';

        }
        for(ll i = 0 ; i <= n - 1; i++)
        {
            vote[i].clear();
            cost[i].clear();
        }
    }
}
