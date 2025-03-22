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

  inll(n);
  inll(k);

  /* XD */
  /* if (n % 2 == 0) {
    ll last_pair = n / 2;
    if (k <= last_pair) {
      cout << (2 * k) - 1 << "\n";
    } else {
      cout << (2 * k) - n << "\n";
    }
  } else {
    ll last_pair = (n / 2) + 1;
    if (k <= last_pair) {
      cout << (2 * k) - 1 << "\n";
    } else {
      cout << (2 * k) - n - 1 << "\n";
    }
  } */

  ll last_impair = (n + 1) / 2;

  if (k <= last_impair) {
    cout << (2 * k) - 1 << "\n";
  } else {
    cout << (2 * k) - (2 * last_impair)<< "\n";
  }

  return 0;
}
