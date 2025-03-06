#include <bits/stdc++.h>
#include <numeric>
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

int calc_LCM(vi vec) {
  return accumulate(vec.begin(), vec.end(), 1, lcm<int, int>);
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int k, l, m, n, d;

  cin >> k >> l >> m >> n >> d;

  int inclusion = ((d / k) + (d / l) + (d / m) + (d / n));

  int double_exclusion = (d / calc_LCM({k, l})) + (d / calc_LCM({k, m})) +
                         (d / calc_LCM({k, n})) + (d / calc_LCM({l, m})) +
                         (d / calc_LCM({l, n})) + (d / calc_LCM({m, n}));

  int triple_exclusion = (d / calc_LCM({k, l, m})) + (d / calc_LCM({k, l, n})) +
                         (d / calc_LCM({k, m, n})) + (d / calc_LCM({l, m, n}));

  int quadruple_exclusion = (d / calc_LCM({k, l, m, n}));

  int damage_dragons =
      inclusion - double_exclusion + triple_exclusion - quadruple_exclusion;

  cout << damage_dragons << "\n";
  // cout << calc_LCM({k, l, m, n}) << "\n";

  return 0;
}
