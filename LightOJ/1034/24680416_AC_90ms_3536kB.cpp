    #include <bits/stdc++.h>
    using namespace std;
    const int mx=10010;
    vector<int>rm[mx];
    int mp[mx],dfn[mx],low[mx],tot[mx],dp,scc,ans,n,m;
    stack<int>s;
    void cl()
    {
        int i;
        dp=scc=ans=0;
        for(i=0;i<mx;i++)
            rm[i].clear();
        memset(mp,-1,sizeof(mp));
        memset(tot,0,sizeof(tot));
        memset(low,0,sizeof(low));
        memset(dfn,-1,sizeof(dfn));
    }
    void tarjan(int u)
    {
        int i;
        dfn[u]=low[u]=dp++;
        s.push(u);
        for(i=0;i<rm[u].size();i++)
        {
            int v=rm[u][i];
            if(dfn[v]==-1)
            {
                tarjan(v);
                low[u]=min(low[u],low[v]);
            }
            else if(mp[v]==-1)
                low[u]=min(low[u],dfn[v]);
        }
        if(low[u]==dfn[u])
        {
            int v;
            do{
               v = s.top();
               mp[v] = scc;
               s.pop();
            }while(v!=u);
            scc++;
        }
    }
    void dfs(int u)
    {
        int i,v;
        dfn[u]=1;
        for(i=0;i<rm[u].size();i++)
        {
            v=rm[u][i];
            if(mp[u]!=mp[v])  tot[mp[v]]++;
            if(!dfn[v]) dfs(v);
        }
    }
    int main()
    {
        int cas,c,i,u,v;
        scanf("%d",&cas);
        for(c=1;c<=cas;c++)
        {
            cl();
            scanf("%d%d",&n,&m);
            for(i=0;i<m;i++)
            {
                scanf("%d%d",&u,&v);
                u--;
                v--;
                rm[u].push_back(v);
            }
            for(i=0;i<n;i++)
                if(dfn[i]==-1)
                    tarjan(i);
            memset(dfn,0,sizeof(dfn));
            for(i=0;i<n;i++)
                if(!dfn[i])
                    dfs(i);
            for(i=0;i<scc;i++)
            {
                if(!tot[i])
                    ans++;
            }
            printf("Case %d: %d\n",c,ans);
        }
        
    }
