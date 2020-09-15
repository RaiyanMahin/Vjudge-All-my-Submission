#include <bits/stdc++.h>
using namespace std;
int dir_x[]={0, 0, -1, 1};
int dir_y[]={1, -1, 0, 0};
int rm[30][30], m, n;
string grid[30];

int bfs(int s1, int s2, int d1, int d2)
{
    queue<pair<int, int> >q;
    pair<int, int>u;
    q.push(make_pair(s1, s2));
    rm[s1][s2]=1;
    int i, j;
    while(!q.empty()) {
        u=q.front();
        q.pop();
        for(i=0; i<4; i++) {
            int x=u.first+dir_x[i];
            int y=u.second+dir_y[i];
            if(x>=0 && x<m && y>=0 && y<n && grid[x][y]!='#' && rm[x][y]==0) {
                rm[x][y]=1;
                q.push(make_pair(x, y));
            }
        }
    }
    if(rm[d1][d2]==1) return 1;
    else return 0;
}

int main()
{
    int t, i, a, b, c, d, j;
    cin>>t;
    while(t--) {
        cin>>m>>n;
        vector<int>v;
        memset(rm, 0, sizeof(rm));
        int cnt=0;
        for(i=0; i<m; i++) {
                cin>>grid[i];
            for(j=0; j<n; j++) {
                if(grid[i][j]=='.' && (i==0 || j==0 || i==m-1 || j==n-1)) {
                    v.push_back(i);
                    v.push_back(j);
                    cnt++;
                }
            }
        }
        if(cnt!=2) cout<<"invalid"<< '\n';
        else {
        a=v[0];
        b=v[1];
        c=v[2];
        d=v[3];
        if(bfs(a,b,c,d)==0) cout<<"invalid"<< '\n';
        else cout<<"valid"<< '\n';
        }
    }
}
