#include <bits/stdc++.h>
#include <set>
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
  set<int> s;

  ini(p);
  while (p--) {
    ini(tmp);
    s.insert(tmp);
  }

  ini(q);
  while (q--) {
    ini(tmp);
    s.insert(tmp);
  }

  if (s.size() == n)
    cout << "I become the guy.\n";
  else
    cout << "Oh, my keyboard!\n";

  return 0;
}
