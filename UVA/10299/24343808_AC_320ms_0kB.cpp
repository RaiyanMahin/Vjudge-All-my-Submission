/// #RM
#include <bits/stdc++.h>
using namespace std;
using ll = int;
//bool co_p(ll n, ll i)
//{
//    if(__gcd(n,i) == 1)
//    {
//        return true;
//
//    }
//    else return false;
//}
//int main()
//{
//    ll n, cnt = 0;
//    while( cin >> n && n != 0)
//    {
//        for(ll i = 1; i <= n; i++)
//        {
//            if(co_p(n,i))
//                cnt++;
//        }
//        cout << cnt << '\n';
//        cnt = 0;
//
//    }
//
//}
ll totient(ll n)
{
    ll res = n;
    if(n == 1)
        return 0;
    for(ll i = 2; i * i <= n ; i++)
    {
        if(n % i == 0)
        {
            res -= res / i;
        }
        while(n % i == 0)
            n /= i;

    }
    if(n !=  1)
        res -= res / n;
    return res;
}
int main()
{
    ll n, cnt = 0;
    while( cin >> n && n != 0)
    {
        cout << totient(n) << '\n';

    }
}

