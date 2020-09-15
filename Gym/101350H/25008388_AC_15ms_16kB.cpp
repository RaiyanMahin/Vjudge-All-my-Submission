#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll boo = 0;
        string s, a; cin >> s; a = s; reverse(a.begin() , a.end());
        if(a != s)
        {
            cout << "no\n";
        }
        if(a == s)
        {

            for(char x : s)  //A, H, I, M, O, T, U, V, W, X, Y
            {
                if(x == 'A' || x == 'H' || x == 'I' || x == 'M' || x == 'O' || x == 'T' || x == 'U' || x == 'V' || x == 'W' || x == 'X' || x == 'Y' )
                {
                    boo++;
                    //break;

                }
            }
            cout << ( (boo == s.size()) ? "yes" : "no" ) << '\n';
            boo = 0;

        }

    }
}
