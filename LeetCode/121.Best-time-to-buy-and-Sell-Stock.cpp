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

class Solution {
public:
  int maxProfit(vector<int> &prices) {

    int minPrice = INT_MAX;
    int maxProfit{0};

    for (auto &p : prices) {
      if (p < minPrice) {
        minPrice = p;
      } else {
        maxProfit = max(maxProfit, p - minPrice);
      }
    }

    return maxProfit;
  }
};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  return 0;
}
