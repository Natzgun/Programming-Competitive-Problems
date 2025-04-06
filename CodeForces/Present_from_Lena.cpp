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

  int weight = (n * 2) + 1;
  int spaces = n;

  FOR(i, 0, n + 1) {
    FOR(j, 0, spaces) cout << "  ";
    FOR(j, 0, i + 1) cout << j << (i == 0 ? "" : " ");
    for (int j = i - 1; j >= 0; j--)
      cout << j << (j == 0 ? "" : " ");
    cout << "\n";

    spaces--;
  }

  spaces = 1;

  FOR(i, 0, n) {
    FOR(j, 0, spaces) cout << "  ";
    FOR(j, 0, n - i) cout << j << (i == (n - 1) ? "" : " ");
    for (int j = n - (i + 2); j >= 0; j--)
      cout << j << (j == 0 ? "" : " ");
    cout << "\n";

    spaces++;
  }

  return 0;
}
