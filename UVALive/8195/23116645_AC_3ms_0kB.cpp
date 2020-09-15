#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
   ll a,b,c,d,e,f,x = 0;
   while(cin >> a >> b >> c >> d >> e >> f)
   {
       if(d >= a)
       {
           x += (d-a);
       }
       if(e >= b)
       {
           x += (e-b);
       }
       if(f >= c)
       {
           x += (f-c);
       }
       cout << x << '\n';
       x = 0;
   }


}
