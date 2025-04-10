#include <algorithm>
#include <bits/stdc++.h>
#include <climits>
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
  ini(m);

  vi puzzle(m);
  for (int i = 0; i < m; i++)
    cin >> puzzle[i];

  sort(puzzle.begin(), puzzle.end());
  int minimum = INT_MAX;

  for (int i = 0; i <= m - n; i++) {
    vi tmp(n);
    int curr = i;
    for (int j = 0; j < n; j++)
      tmp[j] = puzzle[curr++];

    int min = *min_element(tmp.begin(), tmp.end());
    int max = *max_element(tmp.begin(), tmp.end());
    int n_min = max - min;
    if (n_min < minimum)
      minimum = n_min;
  }

  cout << minimum << "\n";

  return 0;
}
