/// #RAIYAN_MAHIN
//////baal er problem
#include <bits/stdc++.h>
using ll = long long;
using namespace std;
ll n;
int main()
{
   while( cin >> n && n != 0)
   {


    queue<ll > q;

    for(ll i = 1; i <= n; i++)
    {
        q.push(i);
    }
    printf("Discarded cards:");
//    while(!q.empty())
//    {
//        cout << q.front();
//        q.pop();
//    }
     while(q.size() > 1)
     {
         cout << ' ' << q.front();
         q.pop();
         ll x = q.front();
         q.pop();
         if(!q.empty())
            cout << ",";
         q.push(x);


     }
     printf("\nRemaining card: %lld\n",q.front());
     q.pop();


   }
}
