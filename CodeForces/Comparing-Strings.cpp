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

  ins(a);
  ins(b);

  if (a.size() != b.size()) {
    cout << "NO";
    return 0;
  }

  int count = 0;
  vi diff;
  for (int i = 0; i < a.length(); i++) {
    if (a[i] != b[i]) {
      count++;
      diff.push_back(i);
    }
  }

  if (count == 0) {
    cout << "YES";
  } else if (count == 2) {
    if (a[diff[0]] == b[diff[1]] && a[diff[1]] == b[diff[0]]) {
      cout << "YES";
    } else {
      cout << "NO";
    }
  } else {
    cout << "NO";
  }
  cout << "\n";

  return 0;
}
