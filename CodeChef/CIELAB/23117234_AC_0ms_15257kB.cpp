#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main()
{
  ll a,b; cin >> a >> b;
  if((a - b) % 10 == 9)
  {
      cout << (a-b) - 1 << '\n';
  }
   else
  {
      cout << (a-b) + 1 << '\n';
  }
  
  

}
