#include <bits/stdc++.h>
using namespace std;
#define mx 1000009
bool chck[mx] = {false};
int cnt = 0;
int dfs(vector <int> v[], int root)
{
    int z,z1 = -1, z2 = -1;
    chck[root] = 1;
    for(int i = 0 ; i < v[root].size(); i++)
    {
        if(!chck[v[root][i]])
        {
            z = dfs(v,v[root][i]);
            if(z >= z1)
            {
                z2 = z1; z1 = z;
            }
            else if(z > z1)
            {
                z2 = z;
            }
        }


    }
     cnt = max(cnt, z1 + z2 + 2);
     return (z1  + 1 );

}
int main()
{
    int n,a,b; cin >> n;
    vector<int > v[n + 10];
    for(int i = 0; i < (n - 1); i++)
    {
        scanf("%d%d", &a, &b);
        v[a].push_back(b);
        v[b].push_back(a);


    }
    dfs(v,1);
    cout << cnt << '\n';

}
