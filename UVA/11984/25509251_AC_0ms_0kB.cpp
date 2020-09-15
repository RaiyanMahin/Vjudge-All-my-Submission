#include <bits/stdc++.h>

using namespace std;
#define p_case(r)  cout << "Case " << r++ << ": "
using ld = double;
int main()
{
    int t; cin >> t;
    int r = 1;
    while(t--)
    {
        double c, d; cin >> c >> d;
        p_case(r);
        ld ss = (d * 5.0) /9.0;
        ss += c;

        cout  << fixed << setprecision(2) << ss << '\n';

    }
}
