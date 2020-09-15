#include<bits/stdc++.h>
//#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define mp make_pair
#define fi first
#define si second
#define int long long
#define pi pair<int,int >
//#define int long long
using namespace std;
vector<pi>adj[100009];
int par[100009];
//int dis[100009];
const int inf=1e18;
int dis[100009];
pi tmp;
void dj(int root)
{
    priority_queue<pi,vector<pi>,greater<pi> >q;
    q.push(mp(0,root));
    dis[root] = 0;
    par[root] = -1;
    while(!q.empty())
    {
        tmp = q.top();
        q.pop();
        int u,v,c;
        u = tmp.si; c = tmp.fi;
        int sz = adj[u].size();
        for(int i = 0; i < sz ; i++)
        {
            v = adj[u][i].fi;
            c = adj[u][i].si;
            if(dis[u] + c < dis[v])
            {
                dis[v] = dis[u] + c;
                par[v] = u;
                q.push(mp(dis[v],v));

            }
        }
    }

}
main()
{
    int n,m,x; cin >> n >> m;
    for(int i = 1; i <= n; i++) dis[i] = inf;
    for(int i = 1 ; i <= m ;i++)
    {
        int u,v,w;
        scanf("%lld%lld%lld",&u,&v,&w);
        adj[u].push_back(mp(v,w));
        adj[v].push_back(mp(u,w));


    }
    dj(1);
    if(dis[n] >= inf)
    {
        cout << -1 << '\n';
        return 0;
    }
    stack<int>ans; x = n;
    ans.push(x);
    while(x != 1)
    {
        ans.push(par[x]);
        x = par[x];
    }
    while(!ans.empty())
    {
        printf("%lld ",ans.top());
        ans.pop();
    }
    return 0 ;

}

