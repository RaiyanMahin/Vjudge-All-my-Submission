/// #RM
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool co_p(ll n, ll i)
{
    if(__gcd(n,i) == 1)
    {
        return true;

    }
    else return false;
}
int main()
{
    ll n, cnt = 0;
    while( cin >> n && n != 0)
    {
        for(ll i = 1; i <= n; i++)
        {
            if(co_p(n,i))
                cnt++;
        }
        cout << cnt << '\n';
        cnt = 0;

    }

}
