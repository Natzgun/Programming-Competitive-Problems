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

  ins(s);

  string target = "hello";

  int j = 0;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == target[j]) {
      j++;
    }

    if (j >= 5) {
      break;
    }
  }

  if (j == 5)
    cout << "YES\n";
  else
    cout << "NO\n";

  return 0;
}
