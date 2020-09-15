#include<bits/stdc++.h>
#define FIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
//#define endl "\n"
using ll  = int;
using namespace std;
string s;
bool isp(int a ,int b)
{

   while(a < b)
   {
       if(s[a] != s[b])
       {
           return false;
           a++; b--;
       }
       else return true;


   }
}
int main()
{
     cin >> s;
    ll mx = 0;
    for(ll i = 0; i < s.size() ; i++)
    {
        for(ll j = 1; j < s.size() ; j++)
        {
            if(!isp(i ,j))
            {
                mx = max(mx, j - i + 1);
            }
        }
    }
    cout << mx << '\n';


}
