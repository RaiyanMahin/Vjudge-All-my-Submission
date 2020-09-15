#include <bits/stdc++.h>
using ld = long double;
using namespace std;
int main()
{
    int t ; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        int a,b, c,d; cin >> a >>  b >> c >> d;
        double  s = b * log10(a) ;
        double w = d * log10(c);
        if(s > w)
        {
            cout << ">" << '\n';
        }
        else cout << "<" << '\n';


    }
}
