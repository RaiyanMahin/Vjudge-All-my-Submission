#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll mx = 10010;
vector<ll > rm[mx];
ll df[mx] , low[mx] , tot[mx] , mp[mx],dp,scc,ans, n,m;
stack <ll > s;
void cl()
{
    dp = ans = scc = 0;
    for(ll i = 0; i < mx; i++)
    {
        rm[i].clear();
    }
    memset(mp, -1, sizeof(mp) );
    memset(tot, 0, sizeof(tot));
    memset(low, 0, sizeof(low));
    memset(df, -1, sizeof(df));
}
void tarjan(ll u)
{
    ll i;
    df[u] = low[u] = dp++;
    s.push(u);
    for(ll i = 0; i < rm[u].size(); i++)
    {
        ll v = rm[u][i];
        if(df[v] == - 1)
        {
            tarjan(v);
            low[u] = min(low[u], low[v]);
        }
        else if(mp[v] == -1)
        {
            low[u] = min(low[u] , df[v]);
        }
    }
    if(low[u] == df[u])
    {
        ll v;
        do{
            v = s.top();
            mp[v] = scc;
            s.pop();
        }while(v != u);
        scc++;
    }
}
void dfs(ll u)
{
    ll v;
    df[u] = 1;
    for(ll i = 0; i < rm[u].size() ; i++)
    {
        v = rm[u][i];
        if(mp[u] != mp[v])
            tot[mp[v]]++;
        if(!df[v])
            dfs(v);

    }
}
int main()
{
    ll t, c, i, u, v; scanf("%lld", &t);
    for(i = 1; i <= t; i++)
    {
        cl();
        scanf("%lld%lld", &n, &m);
        for(i = 0; i < m; i++)
        {
            scanf("%lld%lld" , &u, &v);
            u--; v--;
            rm[u].push_back(v);
        }
        for(i = 0; i < n; i++)
        {
            if(df[i] == -1)
            {
                tarjan(i);
            }
        }
        memset(df, 0 , sizeof(df));
        for(i = 0 ; i < n; i++)
        {
            if(!df[i])
            {
                dfs(i);
            }
        }
        for(i = 0 ; i < scc; i++)
        {
            if(!tot[i])
                ans++;
        }
        printf("Case %lld: %lld\n", t,ans);
    }

}








