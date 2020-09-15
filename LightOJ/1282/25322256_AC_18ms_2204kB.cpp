#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long int;
///ll M = 1e18;
ll M = 1000;
///ll M = 1000000007;
using namespace std;
ll bigmod(ll a, ll b, ll M)
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

}
int main()
{
    //FIO;
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll n, k; cin >> n >> k ;
        long double ans = k * log10(n);
        //cout << ans << '\n';
        ans -= (ll)ans;
      //  cout << "2 " << ans << '\n';
        ll x = pow(10.0, ans) * 100;
       // cout << "dsv " << x << '\n';
        cout << "Case " << r++ << ": ";
        printf("%lld %03lld\n",x,bigmod(n,k,M));
        //cout << x << '\n';

//        ll d = bigmod(n,k,M);
//        string s = to_string(d);
//        ll D = s.size();
//        cout << "Case " << r++ << ": " << x << ' ' << s[D - 3] << s[D - 2] << s[D - 1] << '\n';

    }

}
