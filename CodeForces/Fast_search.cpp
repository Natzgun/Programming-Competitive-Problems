#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int lowBound(vi& v, int x) {
  int l = -1;
  int r = v.size();
  int mid;

  while (l + 1 < r) {
    mid = (l + r) / 2;
    if (v[mid] < x) {
      l = mid;
    } else {
      r = mid;
    }
  }

  return r;
}

int upBound(vi& v, int x) {
  int l = -1;
  int r = v.size();
  int mid;

  while (l + 1 < r) {
    mid = (l + r) / 2;
    if (v[mid] <= x) {
      l = mid;
    } else {
      r = mid;
    }
  }

  return r;
}

int main() {
  int n;
  cin >> n;

  vi nums;
  while (n--) {
    int v;
    cin >> v;
    nums.push_back(v);
  }

  sort(nums.begin(), nums.end());

  int k;
  cin >> k;

  while (k--) {
    int l, r;
    cin >> l >> r;

    // int min = lowBound(nums, l);
    // int max = upBound(nums, r);
    int min = lower_bound(nums.begin(), nums.end(), l) - nums.begin();
    int max = upper_bound(nums.begin(), nums.end(), r) - nums.begin();

    cout << max - min << " ";
  }

  cout << endl;

  return 0;
}
