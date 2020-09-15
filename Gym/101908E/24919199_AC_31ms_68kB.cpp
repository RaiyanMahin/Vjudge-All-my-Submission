//s2.clear();
//        s2 = s.substr(i, d);
//        for(j = 0; j < s2.size() ; j++)
//            {
//                if(s2[j] != s1[j])
//                {
//                    boo++;
//                }
//            }
//            if(boo == s1.size())
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
    string s, s1; cin >> s >> s1;
    ll d = s.size() - s1.size() + 1, boo = 0, i, j;
    for(i = 0; i < d; i++)
    {
        for(j = 0; j < s1.size(); j++)
        {
            if(s[i + j] ==  s1[j])
                break;
        }
        if(j == s1.size())
        {
            boo++;
        }
    }
    cout << boo << '\n';
    boo = 0;






}
