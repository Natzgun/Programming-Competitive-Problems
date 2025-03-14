#include <bits/stdc++.h>
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

  int days[7];
  for (int i = 0; i < 7; i++) {
    ini(day);
    days[i] = day;
  }

  for (size_t i = 1; i <= 7; ++i) {
    n -= days[i - 1];

    if (n <= 0) {
      cout << i << "\n";
      return 0;
    }

    if (i == 7 && n > 0) i = 0;
  }

  return 0;
}
