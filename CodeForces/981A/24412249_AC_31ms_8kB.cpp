#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//#define endl "\n"
using ll  = long long;
using namespace std;
string s;
int isp(ll a ,ll b)
{
    if(a >= b)
        return 1;
    return s[a] == s[b] && isp(a + 1, b - 1);



}
int main()
{
    cin >> s;
    ll mx = 0;
    for(ll i = 0; i < s.size() ; i++)
    {
        for(ll j = i; j < s.size() ; j++)
        {
            if(!isp(i ,j))
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    cout << mx << '\n';
    mx = 0;


}
