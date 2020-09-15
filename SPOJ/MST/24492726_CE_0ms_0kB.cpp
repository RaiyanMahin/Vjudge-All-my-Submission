#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int mx = 1e5 + 4;
typedef pair<ll ,int>pi;
bool mark[mx];
vector<pi> adj[mx];
ll prim(int x)
{
    priority_queue <pi , vector <pi> , greater<pi> > pq;
    int y; ll mincost = 0;
    pi p;
    pq.push({0, x});
    while(!pq.empty())
    {
        p = pq.top();
        pq.pop();
        x = p.second;
        if(mark[x] == true)
        {
            continue;
        }
        mincost += p.first;
        mark[x] = true;
        for(int i = 0 ;i < adj[x].size(); i++)
        {
            y = adj[x][i].second;
            if(mark[y] == false)
                pq.push(adj[x][i]);
        }
    }
    return mincost;

}
int main()
{
    int nodes , edges , x,y; ll weight , mincost; cin >> nodes >> edges;
    for(int i = 0; i < edges; i++)
    {
        cin >> x >> y >> weight;

////        adj[x].push_back(make_pair(weight,x));
////        adj[y].push_back(make_pair(weight,y));
        adj[x].push_back({weight,y});
        adj[y].push_back({weight,x});
    }
    mincost = prim(1);
    cout << mincost << '\n';
}
