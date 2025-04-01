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
  ini(m);

  vi tvs(n);
  FOR(i, 0, n) {
    ini(tmp);
    tvs[i] = tmp;
  }

  sort(tvs.begin(), tvs.end());

  int sum{0};
  int i{0};
  while (m--) {
    sum += tvs[i++];
  }

  cout << abs(sum) << "\n";

  return 0;
}
