#include <algorithm>
#include <bits/stdc++.h>
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

  ini(n);
  while (n--) {
    inll(a);
    inll(b);

    ll mini = min(a, b);
    ll maxi = max(a, b);

    if (mini == 0 && maxi == 0) {
      cout << "YES\n";
      continue;
    }

    if (mini == 0 || maxi == 0) {
      cout << "NO\n";
      continue;
    }

    if (maxi > 2 * mini) {
      cout << "NO\n";
    } else if ((a + b) % 3 == 0)
      cout << "YES\n";
    else
      cout << "NO\n";
  }

  return 0;
}
