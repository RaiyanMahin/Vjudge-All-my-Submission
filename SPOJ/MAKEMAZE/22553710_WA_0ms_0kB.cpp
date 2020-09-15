#include <bits/stdc++.h>
using namespace std;
int dir_x[] = {0,0,-1,1};
int dir_y[] = {1,-1,0,0};
int a[30][30],m,n;
string grid[30];
int bfs(int b1,int b2,int f1,int f2)
{
    queue<pair<int,int> >qi;
    pair<int,int>pi;
    qi.push(make_pair(b1,b2));
    a[f1][f2] = 1;
    int i,j;
    while(!qi.empty())
    {
        pi = qi.front();
        qi.pop();
        for(int i=0;i<4;i++)
        {
            int x = pi.first + dir_x[i];
            int y = pi.second + dir_y[i];
            if(x >= 0 && x<m && y >= 0 && y<n && grid[x][y] != '#' && a[x][y] == 0)
            {
                a[x][y] = 1;
                qi.push(make_pair(x,y));
            }
        }
    }
    if(a[f1][f2] == 1) return 1;
    else return 0;
}
int main()
{
    int t,a,b,i,c,d,j; cin >> t;
    while(t--)
    {
        cin >> m >> n;
        vector<int>vi;
        //memset(a, '0', sizeof(a) );
         //memset(a, 0, sizeof(a));
        int cnt = 0;
        for(i=0;i<m;i++)
        {
            cin >> grid[i];
            for(j=0;j<n;j++)
            {
                if(grid[i][j] == '.' && (i == 0 || j == 0 || i == m-1 || j == n-1 )){
                    vi.push_back(i);
                    vi.push_back(j);
                    cnt ++ ;
                }
            }
        }
        if(cnt != 2){
            cout << "invalid" << '\n';
        }
        else {
            a = vi[0]; b = vi[1]; c = vi[2]; d = vi[3];
            if(bfs(a,b,c,d) == 0) {
                cout << "invalid" << '\n';
            }
            else {
                cout << "valid" << '\n';
            }
        }

    }

}
