/// #RAIYAN_MAHIN
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n;
    map<string , ll , greater<string> > mp;
    map<string , ll > :: iterator it;
    string a;
    while(cin >> n && n)
    {
        mp.clear();
        while(n--)
        {
            cin >> a;
            mp[a]++;
        }
        for(auto x : mp)
    {
        cout << x.first << '\n';
        break;
    }
    }





}
