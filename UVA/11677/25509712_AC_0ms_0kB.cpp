#include <bits/stdc++.h>

using namespace std;
#define p_case(r)  cout << "Case " << r++ << ": "
using ld = float;
int main()
{
    int h1,m1,h2,m2;
    int ans = 0, aa = 0;
    while(cin >> h1 >> m1 >> h2 >> m2 )
    {
        if(h1 == 0 and h2 == 0 and m1 == 0 and m2 == 0)
            break;
       if(h1 == 0)
       {
          ans = 1440 + m1;
       }
       else
       {
           ans = h1 * 60 + m1;
       }
       if(h2 == 0)
       {
           aa = 1440 + m2;

       }
       else
       {
          aa =  h2 * 60 + m2;
       }
       if(aa > ans)
       {
           cout << aa - ans << '\n';
       }
       else
       {
           cout << 1440 - (ans - aa) << '\n';
       }
    }

}

