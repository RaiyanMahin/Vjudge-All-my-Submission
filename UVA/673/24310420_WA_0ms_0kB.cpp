/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s; cin >> s;
        ll a = count(s.begin(), s.end(), '(');
        ll b = count(s.begin(), s.end(), ')');
        ll c = count(s.begin(), s.end(), '[');
        ll d = count(s.begin(), s.end(), ']');
        if(a == b && c == d)
        {
            cout << "Yes" << '\n';
        }
        else cout << "No" << '\n';

    }
}
