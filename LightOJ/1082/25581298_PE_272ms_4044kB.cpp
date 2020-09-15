#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define mx 100010
#define p_case(r)  cout << "Case " << r++ << ": " << '\n'
bool reversesort(const pair<ll,ll> &a, const pair<ll,ll> &b)
{
    return (a.second > b.second);
}


/// basic_prime checker
bool isprime(ll n)
{
    if(n == 2)
        return true;
    if(n % 2 == 0 || n % 3 == 0)
        return false;
    for(ll i = 5 ; i * i <= n; i += 6)
    {
        if(n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;

}
///make_string
/*
 string s = to_string(s);
*/

/// bigmod algo
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M) % M) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M) % M;
        return (tmp * tmp) % M;
    }

}
/***
/// BUILTIN FUNCTIONS OF GCC COMPILER
__builtin_popcount(x) == for setbits of any number
__builtin_parity(x) == return true if number has odd parity , else return 0 if number has even parity
__builtin_clz(x) == count the leading zeros of int64_t. before the 1st occurrence of 1 (set bit)
***/
int a[mx];
int tr[4 * mx];
/*
#ifdef mahin
           freopen("input.txt", "r" , stdin);
           freopen("output.txt", "w" , stdout);
    #endif // mahin */
void bu(int in , int l, int r)
{
    if(l == r)
    {
        tr[in] = a[l];
        return;
    }

    int L = in * 2;
    int R = in * 2 + 1;
    int mid = (l + r) >> 1;
    bu(L, l ,mid);
    bu(R , mid + 1, r);
    tr[in] =  min(tr[L] , tr[R]);
}
int mm(int in , int p , int q, int l, int r)
{
    if(l > q || r < p)
        return mx;
    if(p >= l && q <= r)
        return tr[in];

    int L = in * 2;
    int R = in * 2 + 1;
    int mid = (p + q) >> 1;
    int ans = mm(L , p , mid , l ,r);
    int ans2 = mm(R , mid + 1, q , l , r);
    return min(ans, ans2);
}
int main()
{
    int tc; cin >> tc;
    int r = 1;
    while(tc--)
    {
        p_case(r);
        int n, q;
        scanf("%d%d",&n,&q );
        for(int i = 1; i <= n; i++)
            scanf("%d",&a[i]);
        bu(1,1,n);
        while(q--)
        {
            int l ,r;
            scanf("%d%d",&l,&r);
            printf("%d\n",mm(1,1,n,l,r) );

        }
    }
}


