#include<bits/stdc++.h>
#define mX 200050
using namespace std;
using ll = long long;
ll a[mX];
map< ll,ll > mp;
main()
{
     ll j, k; ll n; cin >> n;
     for(int i=1; i<=n; ++i){
          cin >> a[i];
          mp[a[i]-i]+=a[i];
     }
     ll mx=0;
     for(auto it=mp.begin(); it!=mp.end(); ++it){
          mx=max(mx, (*it).second);
     }
     cout << mx << '\n';
}
