#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll to(ll n)
{
    ll res, j;
    if(n == 1)
        return 1;
    res = n;
    if(n % 2 == 0)
    {
        res -= res / 2;
        do n /= 2 ; while (n % 2 == 0);
    }
    for(j = 3; j * j <= n; j += 2)
    {
        if(n % j == 0)
        {
            res -= res / j;
            do n /= j; while(n % j == 0);
        }
    }
    if(n > 1)
        res -= res / n;
    return res;


}
ll div(ll n)
{

    ll res = 1 , s = 2;
    for(; s * s < n; s++)
    {
        if(n % s == 0)
            res += 2;
    }
    if(s * s == n){
            res++;
    }

    return res;


}
int main()
{
    ll n;
    while(cin >> n)
    {
        if(n <= 2)
            cout << 0 << '\n';
        else
            cout << n - to(n) - div(n) << '\n';
    }

}
