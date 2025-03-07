#include <bits/stdc++.h>

#include <algorithm>
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

  int cont{0};

  /* int zero_r{0}, zero_l{0}, one_r{0}, one_l{0};

  for (size_t i = 0; i < n; i++) {
    int l, r;
    cin >> l >> r;

    if (l == 0) {
      zero_l++;
    } else {
      one_l++;
    }


    if (r == 0) {
      zero_r++;
    } else {
      one_r++;
    }
  }

  cont = min(zero_l, one_l) + min(zero_r, one_r);

  cout << cont << "\n"; */

  int l, r, l_open{0}, r_open{0};

  int total = n;
  while (n--) {
    cin >> l >> r;
    l_open += l;
    r_open += r;
  }

  cont = min(l_open, total - l_open) + min(r_open, total - r_open);

  cout << cont << "\n";

  return 0;
}
