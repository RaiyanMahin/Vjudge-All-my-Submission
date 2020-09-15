#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<ll,ll>m;
int main()
{
    int t;cin>>t;
    while(t--)
    {

        ll n;scanf("%lld",&n);
        ll sum=0;
        ll r[100050],c[100050];
        for(ll i=1;i<=n;i++)
        {
            scanf("%lld%lld",&r[i],&c[i]);
            m[r[i]]++;
        }
        for(ll i=1;i<=n;i++)
        {
            sum+=m[c[i]];
        }
        printf("%lld\n", sum);
        m.clear();

    }
}
