#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
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

  vector<pii> friends(n);

  for (int i = 0; i < n; i++) {
    ini(a);
    friends[i] = {a, i + 1};
  }

  sort(friends.begin(), friends.end());

  for (const auto &i : friends) {
    cout << i.second << " ";
  }
  cout << "\n";

  return 0;
}
