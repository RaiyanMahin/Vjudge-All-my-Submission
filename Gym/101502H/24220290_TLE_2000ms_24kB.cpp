#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t ; cin >> t;
    for(int i = 1; i <= t; i++)
    {
        double a,b, c,d; cin >> a >>  b >> c >> d;
        double  s = b * log(a) ;
        double w = d * log(c);
        if(s > w)
        {
            cout << ">" << '\n';
        }
        else cout << "<" << '\n';


    }
}
