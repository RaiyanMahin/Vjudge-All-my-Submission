#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n; ll a[n + 10], cnt = 0;
    for(ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if(a[i] == 1)
            cnt++;
    }
    cout << n - cnt << '\n';

}
