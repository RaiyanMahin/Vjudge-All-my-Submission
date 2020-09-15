/// #RAIYAN_MAHIN
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
set<string >rm;
string s;
int main()
{
    ll n; cin >> n;
    getchar();
    while(n--)
    {
        getline(cin , s);
        rm.insert(s);
    }
    cout << rm.size() ;
    rm.clear();
//    string a,b;
//    vector<pair < string, string > > vp;
//    ll n; cin >> n;
//    ll cnt = 0;
//    while(n--)
//    {
//        cin >> a >> b;
//
//        vp.push_back(make_pair(a,b));
//        auto p = make_pair(a,b);
//        if(find(vp.begin(), vp.end(), p) != vp.end())
//        {
//            cnt++;
//        }
//    }
//    cout << cnt << '\n';
}
