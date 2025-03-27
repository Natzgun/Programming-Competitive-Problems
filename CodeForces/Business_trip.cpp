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

  ini(k);

  int months = 12;
  vi m(months);
  for (int i = 0; i < months; i++) {
    ini(tmp);
    m[i] = tmp;
  }
  sort(m.begin(), m.end(), greater<int>());

  int cont{0};

  for (int i = 0; i < months; i++) {
    if (k > 0) {
      k -= m[i];
      cont++;
    }
  }

  if (k > 0)
    cout << -1 << "\n";
  else
    cout << cont << "\n";

  return 0;
}
