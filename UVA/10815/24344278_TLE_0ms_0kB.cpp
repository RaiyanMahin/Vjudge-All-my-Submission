/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
int main()
{
   string st;
   set<string>s;
   set<string> :: iterator it;
   while( getline(cin,st) )
   {
       string S = " ";
       if(S == "0") break;
       for(int i = 0; i < st.size(); i++)
       {
           char c = tolower(st[i]);
           if(c >= 97 && c <= 122)
           {
               S += c;
           }
           else if(S != " ")
           {
               s.insert(st);
               S = " ";

           }
       }
       if(S != " ")
       {
           s.insert(S);
       }
       for(it = s.begin(); it != s.end(); it++)
       {
           cout << *it << '\n';
       }
   }






}
