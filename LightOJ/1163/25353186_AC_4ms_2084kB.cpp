#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = unsigned long long int;
///ll M = 1e18;
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
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll a; cin >> a;
        int d = 0;
        cout << "Case " << r++ << ": ";
        for(int i = 9; i >= 0 ; i--)
        {
            if((a - i) % 9 == 0)
            {
                if(d)
                    cout << ' ';
                cout << a + ((a - i) / 9);
                d = 1;
            }
        }
        cout << '\n';
        ///cout << "Case " << r++ << ": " << a1 << '\n';


    }
}
