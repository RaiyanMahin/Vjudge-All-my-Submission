        #include "bits/stdc++.h"
        using ll = long long int;
        //khub e baler approach
        using namespace std;
        int main()
        {
           int t; cin >> t;
           for(int i = 1; i <= t; i++)
           {
               string s; cin >> s;
               if(s.size() == 5) cout << 3 << '\n';
               if(s.size() == 3)
               {
                   if((s[0] == 'o' && s[1] == 'n') || (s[1] == 'n' && s[2] == 'e') || (s[0] == 'o' && s[2] == 'e'))
                   {
                       cout << 1 << '\n';
                   }
                   else cout << 2 << '\n';
               }
           }
        }