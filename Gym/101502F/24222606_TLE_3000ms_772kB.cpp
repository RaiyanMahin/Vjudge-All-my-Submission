#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<ll,ll>m;
int main()
{
    int t; scanf("%lld",&t);
    while(t--)
    {
        ll n,m; scanf("%lld%lld",&n,&m);
        ll v[100010];
        v[0] = 0;
        for(ll i = 1;  i <= n; i++)
        {
            scanf("%lld",&v[i]);
        }
        for(ll i = 1; i <= m ;i++)
        {
            ll s=0;
            ll a,b; scanf("%lld%lld",&a,&b);
            for(ll j=a;j<=b;j++)
            {
                ll x=v[j];
                while(x!=1)
                {
                    if(x%2==1)x--;
                    else x = x>>1;
                    s++;
                }
            }
            printf("%lld\n",s);
        }
    }
}
