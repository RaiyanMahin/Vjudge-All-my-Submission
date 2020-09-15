/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
map<string, string > mp;
map<string, string >:: iterator it;
//vector<pair < string, string > > pii;
//vector< string > rm;
string a,b,c;


int main()
{
    int t; cin >> t;
    getchar();
    while(t--)
    {
        getline(cin, a);
        getline(cin, b);
        //pii.push_back(make_pair(a,b));
        //mp.insert(make_pair(a,b));
        mp[a] = b;


    }
    
    int T; cin >> T;
    getchar();
    while(T--)
    {
        getline(cin, c);
        it = mp.begin();
        while(it != mp.end())
        {
            if(it->first == c)
            {


                cout << it->second << '\n';
                break;


            }
            else if(it->second == c)
            {
                cout << it->first << '\n';
                break;
            }
            it++;

        }

    }
//    //bool e = false;
//
//    for(int i = 0; i < rm.size(); i++)
//    {
//
//       for(int  j = 0; j < pii.size(); j++)
//       {
//           if(rm[i] == pii[j].first)
//           {
//               //e = true;
//               cout << pii[j].second << '\n';
//               break;
//           }
//       }
//       //if(e) cout <<
//
//
//

    }





