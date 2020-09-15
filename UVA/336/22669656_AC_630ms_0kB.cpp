#include<bits/stdc++.h>
#define N 1000000
typedef long long int ll;
using namespace std;
int dis[N];
int vis[N];
int i,j,n,m,a,b,s,t,c,d,h;
int main()
{
    int r=1,aa[1000];

    vector<int>ar[100005];
    queue<int>Q;
    while(scanf("%d",&n)==1)
    {
        if(n==0)
            break;
            memset(dis,0,sizeof(dis));
        m=0;

        for(i=0;i<n;i++)
        {
            scanf("%d %d",&a,&b);
            ar[a].push_back(b);
            ar[b].push_back(a);
            if(dis[a]==0)
                {
                    aa[m]=a;
                    m++,dis[a]=a;
                }
            if(dis[b]==0)
                {
                    aa[m]=b;
                    m++,dis[b]=b;
                }
        }
        for(;;)
        {
            scanf("%d %d",&s,&t);
            if(s==0&&t==0)
                break;
                memset(dis,N,sizeof(dis));
            Q.push(s);dis[s]=0;c=0;
            while(!Q.empty())
            {
                d=Q.front();
                c++;
                Q.pop();
                for(i=0,j=ar[d].size();i<j;i++)
                {
                    h=ar[d][i];
                    if(dis[h]>dis[d]+1)
                    {
                        dis[h]=dis[d]+1;
                        if(dis[h]<=t)
                            Q.push(h);
                    }
                }
            }
            printf("Case %d: %d nodes not reachable from node %d with TTL = %d.\n",r++,m-c,s,t);
        }

       for(i=0;i<m;i++)
            ar[aa[i]].clear();
    }
    return 0;
}
