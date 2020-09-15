#include <bits/stdc++.h>
using ll = long long;
ll M = 1e9;
using namespace std;
ll bigmod(ll a, ll b, ll M)
{
    if(b == 0) return 1;
    if(b & 1)
    {
        return ( ( a % M) * ( bigmod(a, b - 1, M)) ) % M;
    }
    else
    {
        ll tmp = bigmod(a, b / 2 , M);
        return (tmp * tmp) % M;
    }

}
int main()
{
    int t ; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        ll a,b, c,d; cin >> a >> b >> c >> d;
        ll q = bigmod(a,b,M);
        ll  w = bigmod(c,d,M);
        if(q  < w)
            cout << "<" << '\n';
        else if(q > w)
            cout << ">" << '\n';


    }
}








