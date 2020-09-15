/// #RAIYAN_MAHIN
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    ll n; cin >> n;
    set<string >rm;
    set<string>:: iterator it;
    string s;
    while(n--)
    {
        cin >> s;
        
        if(rm.find(s) != rm.end())
        {
            puts("YES");
        }
        else puts("NO");
        rm.insert(s);

    }
}

