#include <bits/stdc++.h>
using ll = long long;
using namespace std;
void Pre_S(ll arr[], ll N, ll Pr[])   ///Prefix_Sum_Function
{
    Pr[0] = arr[0];
    for(ll i = 1; i < N; i++)
    {
        Pr[i] = Pr[i - 1] + arr[i];
    }
    //return Pr;

}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n, k; cin >> n >> k; ll a[n + 10], pre_sum[n + 10];
        for(ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        Pre_S(a, n, pre_sum);
        ll lo = 0, hi = n - 1;
        while(lo < hi)
        {
            ll mid = (lo + hi + 1) / 2;
            ll ans = a[mid]*(n - mid) + (mid  > 0 ? pre_sum[mid - 1] : 0);
            if(ans > k)
                hi = mid - 1;
            else
                lo = mid;
        }
        if(a[lo] * (n - lo) + (lo > 0 ? pre_sum[lo - 1]: 0) == k)
            cout << a[lo] << '\n';
        else
            cout << -1 << '\n';

    }
}
