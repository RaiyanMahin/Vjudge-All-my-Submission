 #include <bits/stdc++.h>
 typedef long long ll;
 #define N 100000000
using namespace std;

int C[]={0, 0, -1, 1};
int R[]={1, -1, 0, 0};
queue<int>qi;
map<string,int>mi;
map<int,string>im;
int dis[1200][1300],ar[1200][1300];
int P[50000];
int main()
{
    int i,j,k,r=1,sx,sy,xx,yy,s,dx,dy,m,n,a,x,y,b,c,h,Ca,Ra[1010];
    char ds[20000],*CP;
    while(scanf("%d%d",&n,&m) == 2)
    {
        if(n == 0 && m == 0) break;
        scanf("%d",&r);
        for(int i=0;i<1002;i++)
            memset(ar[i],0,sizeof(ar[i]));
        for(int i=0;i<r;i++)
        {
            scanf("%d%d",&Ca,&b);
            for(int k=0;k<b;k++)
            {
                scanf("%d",&a);
                ar[Ca][a] = 1;
            }
        }
        scanf("%d%d%d%d",&sx,&sy,&dx,&dy);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<=m;j++)
            {
                dis[i][j] = N;
            }
        }
        qi.push(sx); qi.push(sy); dis[sx][sy] = 0;
        while(!qi.empty())
        {
            x = qi.front();
            qi.pop();
            y = qi.front();
            qi.pop();
            for(int k=0;k<4;k++)
            {
                xx = x + C[k];
                yy = y + R[k];
                if(xx >= 0 && yy >= 0 && xx <= n && yy <= m && ar[xx][yy] == 0 && dis[xx][yy] > dis[x][y]){
                    dis[xx][yy] = dis[x][y] + 1;
                    qi.push(xx);
                    qi.push(yy);
                }
            }
        }
        printf("%d\n",dis[dx][dy]);


    }
}

