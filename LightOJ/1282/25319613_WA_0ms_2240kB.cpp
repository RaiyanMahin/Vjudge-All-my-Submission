#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long;
ll M = 1e18;
using namespace std;
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M)) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M);
        return (tmp * tmp) % M;
    }

}
int main()
{
    FIO;
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        //ll r = 1;
        ll n, k; cin >> n >> k ;
        ll d = bigmod(n,k,M);
        string s = to_string(d);
        ll D = s.size();
        cout << "Case " << r++ << ": " << s[0] << s[1] << s[2] << ' ' << s[D - 3] << s[D - 2] << s[D - 1] << '\n';

    }

}
