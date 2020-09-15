// will apply binary search
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = long long int;
///ll M = 1e18;
int main()
{
    ll t; cin >> t;
    ll r = 1;
    while(t--)
    {
        ll n; cin >> n; string s = "";
        s = to_string(n);
        char c = s[0];
        ll x = c - '0';
        n += x;
        //cout << "eta n " << n << '\n';
        string ss = to_string(n);
        char z = ss[ss.size() - 1];
        ll rr = z - '0';
        if(rr % 9 != 0)
        {
            ///cout << "last " << ss[ss.size() - 1] << '\n';
            cout << "Case " << r++ << ": " << ss << '\n';

        }
        if(rr % 9 == 0)
        {
            ///cout << "last  ee " << ss[ss.size() - 1] << '\n';
            cout << "Case " << r++ << ": " << ss << ' ';
            n += 1;
            string S = to_string(n);
            cout << S << '\n';

        }




    }
}
