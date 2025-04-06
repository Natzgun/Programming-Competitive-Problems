#include <bits/stdc++.h>
#include <unordered_set>
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

  string n_s = "";

  unordered_set<char> vowels = {'a', 'o', 'y', 'e', 'u', 'i'};

  FOR(i, 0, s.length()) {
    char v = tolower(s[i]);

    if (vowels.count(v)) {
      continue;
    } else {
      n_s += '.';
      n_s += v;
    }
  }

  cout << n_s << "\n";

  return 0;
}
