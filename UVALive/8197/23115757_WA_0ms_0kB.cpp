#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
    string s;
    cin >> s;
    ll d = s.size(), x = 0;
    for(int i = 0 ; i < d; i++)
    {
        if(s[i] == s[i+1])
        {
            x++;
        }
    }
    cout << x << '\n';


}
