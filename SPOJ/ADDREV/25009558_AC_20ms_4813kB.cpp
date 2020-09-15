#include <bits/stdc++.h>
using ll = long long;
ll re(ll A)
{
    ll rev = 0;
    while(A > 0)
    {
        rev = rev * 10 + A % 10;
        A /= 10;
    }
    return rev;
}
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
       ll a,b; cin >> a >> b;
       ll cc = - 1;
       ll DD = re(a);
       ll D = re(b);
       ll c = DD + D;
       string C = to_string(c);
       reverse(C.begin() , C.end());
       C.erase(0, C.find_first_not_of('0'));
       cout << C;
       cout << '\n';
       C.clear();



    }
}

