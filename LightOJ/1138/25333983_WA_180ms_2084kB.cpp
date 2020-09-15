#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using ll = long long int;
///ll M = 1e18;
using namespace std;
bool ch(ll mid, ll n)
{
    ll temp = mid, cnt = 0, d = 5;
    while(d <= temp)
    {
        cnt += temp / d;
        d *= 5;
    }
    return (cnt >= n);
}
ll zero(ll n)
{
    if(n == 1)
        return 5;
    ll low = 0 , high = n * 5;
    while(low < high)
    {
        ll mid = (low + high) >> 1;
        if(ch(mid, n))
        {
            high = mid;
            //cout << "eta high  " << high << '\n';
        }
        else
        {
            low = mid + 1;
            //cout << "eta low  " << low << '\n';
        }
    }
    return low;
}

int main()
{
    ll t; cin >> t;
    ll r = 1, d = 0;
    while(t--)
    {
        ll n; cin >> n;
        ll DD = n % 5;

        if(!DD)
        {
            cout << "Case " << r++ << ": " << "impossible" << '\n';

        }
        if(DD)
        {
            cout << "Case " << r++ << ": " << zero(n) << '\n';

        }

    }
}
