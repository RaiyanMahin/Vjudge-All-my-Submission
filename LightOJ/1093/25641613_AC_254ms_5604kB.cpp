#include <bits/stdc++.h>
using namespace std;
#define MX 100010
#define INF 1 << 28
int treesMIN[4 * MX + 10], treesMAX[4 * MX + 10];
int ara[MX + 10];
int i, j, k, l, x, y, z, m, n, ans, p, q, r, T, cs = 1, d;
void build1(int node, int lo, int hi){
    if (lo==hi) {
            treesMIN[node]=ara[lo];
            return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(lo+hi)/2;
    build1(Left,lo,mid);
    build1(Right,mid+1,hi);

    treesMIN[node] =  min (treesMIN[Left],treesMIN[Right]) ;
}
void build2(int node, int lo, int hi){
    if (lo==hi) {
            treesMAX[node]=ara[lo];
            return;
    }
    int Left=node*2;
    int Right=node*2+1;
    int mid=(lo+hi)/2;
    build2(Left,lo,mid);
    build2(Right,mid+1,hi);

    treesMAX[node] =  max( treesMAX[Left],treesMAX[Right] );
}
int getMin(int node, int start, int end, int i, int j)
{
    if(start >= i && end <= j) return treesMIN[node];

    if(start > j || end < i || i > j) return INF;

    int mid = (start + end) / 2;
    int lft = 2 * node;
    int rght = 2 * node + 1;

    int p = getMin(lft, start, mid, i, j);
    int q = getMin(rght, mid + 1, end, i, j);

    return min(p, q);

}

int getMax(int node, int start, int end, int i, int j)
{
    if(start >= i && end <= j) return treesMAX[node];

    if(start > j || end < i || i > j) return -1;

    int mid = (start + end) / 2;
    int lft = 2 * node;
    int rght = 2 * node + 1;

    int p = getMax(lft, start, mid, i, j);
    int q = getMax(rght, mid + 1, end, i, j);

    return max(p, q);

}


int main(  int argc, char const *argv[] )
{



    cin >> T;
    while(T--)
    {


        scanf("%d %d",&n, &d);
        memset(treesMAX, 0, sizeof(treesMAX));
        memset(treesMIN, 0, sizeof(treesMIN));
        for(int i = 1; i <= n; i++)
        {
            scanf("%d", &ara[i]);
        }
        build1(1,1,n);
        build2(1,1,n);

        if(d == 1)
        {
            printf("Case %d: %d\n",cs++,ans);
            continue;
        }
        ans = 0;
       for(int i = 1; i < n; i++){
            int xx = i + 1;
            int yy = min(n, i + d - 1);

            int mx = getMax(1, 1, n, xx, yy);
            int mn = getMin(1, 1, n, xx, yy);

            int tt = abs(mx - ara[i]);
            tt = max(tt, abs(mn - ara[i]));

            ans = max(ans, tt);


        }
        printf("Case %d: %d\n",cs++,ans);



    }







     ///timeStamp;
    return 0;

}



