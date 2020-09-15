/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
string s;
int main()
{
   
    while(cin >> s)
    {
         list<char>rm;
        list < char >:: iterator it = rm.begin();
        for(ll i = 0; i < s.size(); i++)
        {
            if(s[i] == '[')
                it = rm.begin();
            if(s[i] == ']')
                it = rm.end();
            else
                rm.insert(it,s[i]);
        }
        for(it = rm.begin() ; it != rm.end(); it++)
        {
            cout << *it ;
        }
        cout << '\n';
        //rm.clear();
    }
}
