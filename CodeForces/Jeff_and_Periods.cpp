#include <bits/stdc++.h>
#include <pthread.h>
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
  vector<pii> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i + 1;
  }

  sort(a.begin(), a.end());

  vector<pii> res;

  int i{0};
  while (i < n) {
    int x = a[i].first;
    vi freq;
    while (i < n && a[i].first == x) {
      freq.push_back(a[i].second);
      i++;
    }

    bool is_pa = true;
    int diff{0};
    if (freq.size() == 1) {
      // cout << x << " " << 0 << "\n";
      // continue;
      diff = 0;
    } else {
      diff = freq[1] - freq[0];
      for (int j = 1; j < freq.size() - 1; j++) {
        if (freq[j + 1] - freq[j] != diff) {
          is_pa = false;
          break;
        }
      }
    }
    if (is_pa) {
      // cout << x << " " << diff << "\n";
      res.push_back({x, diff});
    }
  }

  cout << res.size() << "\n";
  for (auto &f : res) {
    cout << f.first << " " << f.second << "\n";
  }

  return 0;
}
