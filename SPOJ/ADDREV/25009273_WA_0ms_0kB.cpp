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
       ll DD = re(a);
       ll D = re(b);
       ll c = DD + D;
       string C = to_string(c);
       reverse(C.begin() , C.end());
       for(char x : C)
        {
            if(x == '0')
                continue;
            if(x != '0')
                cout << x;
        }
        cout << '\n';
        C.clear();



    }
}

