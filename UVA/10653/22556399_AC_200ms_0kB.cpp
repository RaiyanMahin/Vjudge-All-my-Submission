#include <bits/stdc++.h>
 typedef long long ll;
 #define N 100000000
using namespace std;
queue<int>Q;
map<string,int>Si;
map<int,string>Is;

int dis[1200][1300],ar[1200][1300];
int P[50000];


int main()
{
    int i,j,k,r=1,s,sx,sy,dx,dy,m,n,a,xx,yy,x,y,b,c,C[4]={0,0,1,-1},R[4]={1,-1,0,0},h,Ca,Ra[1009];
    char ds[20000],*CP;


      while(scanf("%d %d",&n,&m)==2)
      {
          if(n==0&&m==0)
            break;
          scanf("%d",&r);
          for(i=0;i<1002;i++)
          memset(ar[i],0,sizeof(ar[i]));
          for(i=0;i<r;i++)
          {
              scanf("%d %d",&Ca,&b);
              for(k=0;k<b;k++)
                {
                    scanf("%d",&a);
                    ar[Ca][a]=1;
                }
          }

                scanf("%d%d%d%d",&sx,&sy,&dx,&dy);

         for(i=0;i<=n;i++)
            {
                for(j=0;j<=m;j++)
                  dis[i][j]=N;
            }

         Q.push(sx);Q.push(sy);dis[sx][sy]=0;
          while(!Q.empty())
          {
              x=Q.front();Q.pop();
              y=Q.front();Q.pop();
              for(k=0;k<4;k++)
              {
                  xx=x+C[k];
                  yy=y+R[k];
                  if(xx>=0&&yy>=0&&xx<=n&&yy<=m&&ar[xx][yy]==0&&dis[xx][yy]>dis[x][y]+1)
                  {
                      dis[xx][yy]=dis[x][y]+1;
                      Q.push(xx);
                      Q.push(yy);
                  }
              }
          }
          printf("%d\n",dis[dx][dy]);
      }
    return 0;
} 