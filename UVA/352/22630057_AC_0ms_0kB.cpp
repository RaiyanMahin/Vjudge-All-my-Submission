#include <bits/stdc++.h>
#define N 1000000
typedef long long int ll;
using namespace std;
char st[100][100];

void dfs(int x,int y,int n)
{
    int xx,yy,i,R[]={0,0,1,-1,-1,-1,1,1},C[]={1,-1,0,0,-1,1,-1,1};
    for(i=0;i<8;i++)
    {
        xx=x+R[i];
        yy=y+C[i];
        if(xx>=0&&yy>=0&&xx<n&&yy<n&&st[xx][yy]=='1')
        {
            st[xx][yy]='0';
            dfs(xx,yy,n);
        }
    }
}

int main()
{
    int i,j,k,l,t,r=1,s,m,n,a,b,c,d,e,f,g,h;
    char u,v;
     while(scanf("%d",&n)==1)
     {
         for(i=0;i<n;i++)
         {

                scanf("%s",&st[i]);

         }

         for(i=k=0;i<n;i++)
         {
             for(j=0;j<n;j++)
             {
                 if(st[i][j]=='1')
                 {
                     st[i][j]='0';
                     k++;
                     dfs(i,j,n);
                 }
             }
         }
         printf("Image number %d contains %d war eagles.\n",r++,k);
     }
    
}
