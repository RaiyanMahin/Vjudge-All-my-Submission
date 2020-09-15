//s2.clear();
//        s2 = s.substr(i, d);
//        for(j = 0; j < s2.size() ; j++)
//            {
//                if(s2[j] != s1[j])
//                {
//                    boo++;
//                }
//            }
//            if(boo == s1.size())
#include <bits/stdc++.h>
using ll = int;
using namespace std;
const ll N = 1000 + 10;
bitset <1010>b [N] , c;
main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    ll n, m ,k ,x; cin >> n >> m>> k;
    for(ll i = 0; i < k; i++)
    {
        cin >> x;
        c.set(x);
    }
    for(ll i = 1; i <= n; i++)
    {
        cin >> k;
        while(k--)
        {
            cin >> x;
            b[i].set(x);
        }
    }
    for(ll i = 1; i <= n; i++)
    {
        c ^= b[i];
        if(c.count() == 0)
        {
            return cout << i << '\n' , 0;
        }
    }
    for(ll i = 1; i <= n; i++)
    {
        c ^= b[i];
        if(c.count() == 0)
        {
            return cout << (i + n) << '\n' , 0;
        }
    }
    puts("-1");
    return 0;

}
