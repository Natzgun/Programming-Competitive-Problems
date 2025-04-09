#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t)                                                                 \
  int(t);                                                                      \
  cin >> t;
#define inll(t)                                                                \
  ll(t);                                                                       \
  cin >> t;
#define ins(t)                                                                 \
  string(t);                                                                   \
  cin >> t;
#define inp(t)                                                                 \
  int(t);                                                                      \
  cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(s);
  ini(n);

  vector<pii> dragons(n);

  for (int i = 0; i < n; i++) {
    ini(x);
    ini(y);

    dragons[i].first = x;
    dragons[i].second = y;
  }

  sort(dragons.begin(), dragons.end());

  for (const auto &d : dragons) {
    if (d.first >= s) {
      cout << "NO\n";
      return 0;
    }

    s += d.second;
  }

  // for (auto i : dragons) {
  //   cout << i.first << " -> " << i.second << endl;
  // }

  cout << "YES\n";

  return 0;
}
