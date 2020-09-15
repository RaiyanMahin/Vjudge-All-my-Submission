#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<pair<int, int> > p(n);
  for (int i = 0; i < n; ++i) {
    cin >> p[i].first >> p[i].second;
  }

  vector<pair<int, int> > reach;
  for (int i = 0; i < n - 1; ++i) {
    for (int j = i + 1; j < n; ++j) {
      reach.push_back(make_pair(p[i].first + p[j].first, p[i].second + p[j].second));
    }
  }

  sort(reach.begin(), reach.end());
  int count = 0, ans = 0;
  for (int i = 1; i < reach.size(); ++i) {
    if (reach[i] == reach[i - 1])
      count++;
    else {
      ans += count * (count + 1) / 2;
      count = 0;
    }
  }
  ans += count * (count + 1) / 2;
  cout << ans << '\n';
}
int main() {
  int t;  cin >> t;
  for (int i = 1; i <= t; ++i) {
    cout << "Case" << ' ' << i << ":" << ' ';
    solve();
  }
  
}