/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
   vector<ll>rm;
    map<ll , ll > mp;
    map<ll , ll >:: iterator it;
    ll n;
    while(cin >> n)
    {
      if(mp.count(n) == 0)
      {
          mp[n] = 1;
          rm.push_back(n);

      }
      else
        mp[n]++;

    }
    for(ll i = 0; i < rm.size(); i++)
    {
        cout << rm[i] << ' ' << mp[rm[i]] << '\n';
    }



}
