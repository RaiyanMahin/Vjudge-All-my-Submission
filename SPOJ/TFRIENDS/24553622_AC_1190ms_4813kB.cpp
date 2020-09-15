#include<bits/stdc++.h>
using namespace std;
using ll = long long;
vector<int >adj_1[10000] , adj_2[10000];
bool visit_1[10000] = {false} , visit_2[10000] = {false};
int dis[10000] = {0} , fn[10000] = {0}, tqm = 0;
stack <int > st;
void dfs(int s)
{
    visit_1[s] = true;
    tqm++;
    dis[s] = tqm;
    for(int  i = 0 ; i < adj_1[s].size(); i++)
    {
        int x = adj_1[s][i];
        if(!visit_1[x])
        {
             visit_1[x];
             dfs(x);
        }
    }
    tqm++;
    fn[s] = tqm;
    st.push(s);

}
void scc_dfs(int s)
{
    visit_2[s] = true;
    for(int  i = 0 ; i < adj_2[s].size(); i++)
    {
        int x = adj_2[s][i];
        if(!visit_2[x])
        {
            visit_2[x] = true;
            scc_dfs(x);
        }
    }
}
int main()
{
    int t,n,cnt = 0 ; string s; cin >> t;
    while(t--)
    {
        cin >> n;
        memset(visit_1 , 0, sizeof(visit_1));
        memset(visit_2 , 0 , sizeof(visit_2));
        memset(dis , 0 , sizeof(dis));
        memset(fn , 0 , sizeof(fn));
        tqm = 0, cnt = 0 ;

        for(int  i = 0 ; i <= n; i++)
        {
            adj_1[i].clear();
            adj_2[i].clear();
        }
        for(int i = 0 ;  i < n ;i++)
        {
            cin >> s;
            for(int j =  0; j < n; j++)
            {
                if(s[j] == 'Y')
                {
                    adj_1[i].push_back(j);
                    adj_2[j].push_back(i);
                }
            }

        }
        for(int i = 0; i < n; i++)
        {
            if(!visit_1[i])
                dfs(i);
        }
        while(!st.empty())
        {
            int x = st.top();
            if(!visit_2[x])
            {
                cnt++;
                scc_dfs(x);
            }
            st.pop();
        }
        cout << cnt << '\n';
        cnt = 0;
    }









}
