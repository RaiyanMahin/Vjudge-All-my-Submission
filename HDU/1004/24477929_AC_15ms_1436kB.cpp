/// #RAIYAN_MAHIN
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n;

    map<string , ll > mp;
    map<string , ll > :: iterator it;
    string a , b;
    while(cin >> n && n)
    {
        mp.clear();
        while(n--)
        {
            cin >> a;
            mp[a]++;
        }
        ll mx = -1;
        for(auto x : mp)
        {
            if(x.second > mx)
            {
                mx = x.second;
                b = x.first;

            }

        }
        cout << b << '\n';
//        it = mp.end();
//        it--;
//        cout << it->first << '\n';



    }





}
