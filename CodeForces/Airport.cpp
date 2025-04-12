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

int max_benefit(vi planes, int n, int m) {
  priority_queue<int> pq;
  for (int i = 0; i < m; ++i) {
    pq.push(planes[i]);
  }

  int max = 0;
  while (n-- > 0) {
    int top = pq.top();
    pq.pop();
    max += top;
    if (top - 1 > 0) {
      pq.push(top - 1);
    }
  }

  return max;
}

int min_benefit(vi planes, int n, int m) {
  int min = 0;

  sort(planes.begin(), planes.end());
  FOR(i, 0, m) {
    while (planes[i] > 0 && n > 0) {
      min += planes[i]--;
      n--;
    }
  }
  return min;
}

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);
  ini(m);

  vi planes(m);

  for (int i = 0; i < m; i++)
    cin >> planes[i];

  int max = max_benefit(planes, n, m);
  int min = min_benefit(planes, n, m);

  cout << max << " " << min << "\n";

  return 0;
}
