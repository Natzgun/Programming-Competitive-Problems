#include <bits/stdc++.h>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t) int(t); cin >> t;
#define inll(t) ll(t); cin >> t;
#define ins(t) string(t); cin >> t;
#define inp(t) int (t); cin >> t;


int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);
  vi nums(n);
  int total = n;
  for (size_t i = 0; i < n; i++) {
    ini(t);
    nums[i] = t;
  }

  auto max_it = max_element(nums.begin(), nums.end());
  int max_val = *max_it;
  int pos_max = distance(nums.begin(), max_it);

  auto min_it = min_element(nums.rbegin(),nums.rend());
  int min_val = *min_it;
  int pos_min = distance(nums.begin(), min_it.base() - 1);

  // cout << (pos_max) + (total - pos_min -1) << endl;
  if (pos_max > pos_min) {
    cout << (pos_max) + (total - pos_min - 2) << endl;
  } else {
    cout << (pos_max) + (total - pos_min - 1) << endl;
  }



  return 0;
}
