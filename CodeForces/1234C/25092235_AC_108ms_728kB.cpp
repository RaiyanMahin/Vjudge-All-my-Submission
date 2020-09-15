#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll n; string s[2];
        cin >> n >> s[0] >> s[1];
        ll r = 0, c = 0;
        for(c = 0; c < n; c++)
        {
            if(s[r][c] >= '3')
            {
                if(s[r ^ 1][c] < '3')
                    break;
                else
                    r ^= 1;
            }
        }
        if(c == n && r == 1)
        {
            cout << "YES\n";
        }
        else
            cout << "NO\n";

    }

}
