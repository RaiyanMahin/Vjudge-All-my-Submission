///loser
#include <bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using ll = long long;
void chck(ll a, ll b)
{
    while(a <= b)
    {
        bool d = false;
        for(ll j = 2; j * j <= a; j++)
        {
            if(a % j == 0)
            {
                d = true;
                break;
            }
        }
        if(!d and a != 1)
            cout << a << '\n';
        a++;
        
    }
}
int main()
{
    ll t; cin >> t;
    while(t--)
    {
        ll a,b; cin >> a >> b;
        chck(a,b);
    }

}
