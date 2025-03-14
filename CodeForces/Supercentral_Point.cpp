#include <bits/stdc++.h>

#include <utility>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t) \
  int(t);      \
  cin >> t;
#define inll(t) \
  ll(t);        \
  cin >> t;
#define ins(t) \
  string(t);   \
  cin >> t;
#define inp(t) \
  int(t);      \
  cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);

  vector<pii> points(n);
  for (size_t i = 0; i < n; i++) {
    ini(x);
    ini(y);
    pii p = {x, y};
    points[i] = p;
  }

  // for (auto &p : points)
  //   cout << p.first << p.second << "\n";

  int total_supercentral{0};
  for (size_t i = 0; i < n; i++) {
    pii p = points[i];
    int x = p.first;
    int y = p.second;

    int neighbors[4] = {false, false, false, false};
    for (size_t j = 0; j < n; j++) {
      pii curr = points[j];
      int x_curr = curr.first;
      int y_curr = curr.second;

      if (x_curr > x && y_curr == y) neighbors[0] = true;

      if (x_curr < x && y_curr == y) neighbors[1] = true;

      if (x_curr == x && y_curr < y) neighbors[2] = true;

      if (x_curr == x && y_curr > y) neighbors[3] = true;
    }

    if (neighbors[0] && neighbors[1] && neighbors[2] && neighbors[3]) total_supercentral++;
  }

  cout << total_supercentral << "\n";
  return 0;
}
