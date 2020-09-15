#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<ll,ll>m;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        ll n,m; cin >> n >> m;
        vector<ll>v;
        v.push_back(0);
        for(ll i = 1;  i <= n; i++)
        {
            cin >> v[i];
        }
        for(ll i = 1; i <= m ;i++)
        {
            ll s=0;
            ll a,b; cin >> a >> b;
            for(ll j=a;j<=b;j++)
            {
                ll x=v[j];
                while(x!=1)
                {
                    if(x%2==1)x--;
                    else x=x/2;
                    s++;
                }
            }
            cout<<s<<endl;
        }
    }
}
