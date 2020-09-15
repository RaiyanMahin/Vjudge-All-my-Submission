#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long int;
///ll M = 1e18;
using namespace std;
ll ch(ll n)
{
    ll cnt = 0, d = 5;
    while(n / d > 0)
    {
        cnt += n / d;
        d *= 5;
    }
    return cnt;
}
ll zero(ll n)
{
    ll aa = -1;
    if(n == 1)
        return 5;
    ll low = 0 , high = n * 5;
    while(low <= high)
    {
        ll mid = (low + high) >> 1;
        ll ss = ch(mid);
        if(ss > n)
            high = mid - 1;
        if(ss < n)
            low = mid + 1;
        if(ss == n)
        {
           aa = mid;
           high = mid - 1;
        }
    }
    return aa;
}

int main()
{
    ll t; cin >> t;
    ll r = 1, d = 0;
    while(t--)
    {
        ll n; cin >> n;
        ll DD = zero(n);
        if(DD == -1)
        {
            cout << "Case " << r++ << ": " << "impossible" << '\n';

        }
        if(DD  != -1)
        {
            cout << "Case " << r++ << ": " << DD << '\n';
        }



    }
}
