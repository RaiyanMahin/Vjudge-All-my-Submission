#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = long long int;
using ld = long double;
#define sn scanf
#define pb push_back
#define pf printf
/*ll d(ll n)
{
    return n - (n / 10);
}
ll b_u(ll n)
{
    ll low = n, high = n * 10;
    while(low < high)
    {
        ll mid = (low + high  + 1) >> 1;
        if(d(mid) <= n)
        {
            low = mid;
        }
        else
        {
           high = mid - 1;
        }
    }
    return low;
}
ll b_l(ll n)
{
    ll low = n, high = n * 10;
    while(low < high)
    {
        ll mid = (low + high ) >> 1;
        if(d(mid) >= n)
        {
            high = mid;

        }
        else
        {
            low = mid + 1;
        }

    }
    return low;
} */
/* ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M) % M) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M) % M;
        return (tmp * tmp) % M;
    }

} */
vector< ll >ar[2000];
bool cmp(ll a,ll b)
{
    return a>b;
}
main()
{
    FIO;
    ll i,j,k,l,t,cs=1,r=1,s,m,n,a,b,c,d,e,f,g,h,u,v, ff,hh,jj,ll;
    sn("%lld",&t);
    while(t--)
    {
        sn("%lld %lld",&n,&k);
        double  tt=0,mr=0;
        for(i=0;i<n;i++)
        {
            sn("%lld %lld",&u,&v);
            ar[v].pb(u);
            mr=mr+u;
            tt=tt+v;
        }
        for(i=1;i<=1000;i++)
        {
            sort(ar[i].begin(),ar[i].end(),cmp);
        }
        double pr=0;
        for(i=0;i<k;i++)
        {
            pr=-1.0;
            for(j=1;j<=1000;j++)
            {
                if(ar[j].size()>0)
                {
                    double aa=ar[j].back(),bb=j;
                    aa=(mr-aa)/(tt-bb);
                    if(aa>pr)
                    {
                        pr=aa;
                        c=j;
                        d=ar[j].back();
                    }
                }
            }
            tt=tt-c;
            mr=mr-d;

            ar[c].pop_back();
        }
        pf("Case %lld: %.9lf\n",cs++,(mr/tt)*100.0);
        for(i=0;i<=1000;i++)
        {
            ar[i].clear();
        }
    }
    return 0;

}
