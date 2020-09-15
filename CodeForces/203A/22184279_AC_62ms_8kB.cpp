    #include <bits/stdc++.h>
     
    using namespace std;
     
    int main() {
      ios::sync_with_stdio(false);
      cin.tie(0);
      int x, t, a, b, da, db;
      cin >> x >> t >> a >> b >> da >> db;
      for (int i = 0; i < t; ++i) {
        for (int j = 0; j < t; ++j) {
          int pa = a - da * i;
          int pb = b - db * j;
          if (pa + pb == x || pa == x || pb == x || 0 == x) {
            cout << "YES" << '\n';
            return 0;
          }
        }
      } 
      cout << "NO" << '\n';
      return 0;
    }