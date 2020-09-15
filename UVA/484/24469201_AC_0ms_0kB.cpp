/// #RAIYAN_MAHIN
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
   //vector<ll>rm;
   queue<ll > rm;
    map<ll , ll > mp;
    map<ll , ll >:: iterator it;
    ll n;
    while(cin >> n )
    {
      mp[n]++;
      if(mp[n] == 1)
      {
          rm.push(n);
      }
    }
    while(!rm.empty())
    {
        cout << rm.front() << ' ' << mp[rm.front()] << '\n';
        rm.pop();
    }



}
