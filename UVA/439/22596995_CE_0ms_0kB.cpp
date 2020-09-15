#include<bits/stdc++.h>
typedef long long ll;
//#define pb push_back
#define pii pair<int,int>
#define clear(a) memset(a, 0, sizeof(a))
using namespace std;
int fx[] = {1,-1,1,-1,2,2,-2,-2};
int fy[] = {2,2,-2,-2,1,-1,1,-1};
string s1,s2;
bool visit[10][10];
int cost[10][10];
void bfs (int a,int b,int c,int d)
{
    queue<pii>qi;
    clear(visit);
    qi.push(pii(a,b));
    visit[a][b] = true;
    cost[a][b] = 0;
    while(!qi.empty())
    {
        pii top  = qi.front();
        qi.pop();
        if(top.first == c && top.second == d)
        {
            cout << "To get from" << s1 << "to" << s2 << "takes" << cost[top.first][top.second] << "knight moves." << '\n';
            return;
        }
        for(int i=0; i<8; i++)
        {
            int m = top.first + fx [i];
            int n = top.second + fy [i];
            if((m>0 && m<=8 ) && (n>0 && n<=8))
            {
                visit[m][n] = true;
                cost[m][n] = cost[top.first][top.second] + 1;
                qi.push(pii(m,n));

            }
        }

    }
}
int main()
{
    while(cin >> s1 >> s2 )

    {
        int sx = s1[0] - 96, 
        int sy = s1[1] - '0', 
        int dx = s2[0] -96, 
        int dy = s2[1] - '0';
        bfs(sx,sy,dx,dy);
        return 0;

    }
}