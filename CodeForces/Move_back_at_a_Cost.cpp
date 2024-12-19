#include <algorithm>
#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int test;
  cin >> test;
  while (test--) {
    ll n;
    cin >> n;
    vector<ll> nums;
    for (ll i = 0; i < n; i++) {
      int tmp;
      cin >> tmp;
      nums.push_back(tmp);
    }

    for (ll i = 0; i < n-1;) {
      if (nums[i] > nums[i + 1]) {
        int current = nums[i] + 1;
        nums.erase(nums.begin() + i);
        nums.push_back(current);
        if (i > 0) i--;
      } else {
        i++;
      }
    }

    for (auto i : nums) {
      cout << i << " ";
    }
    cout << "\n";
  }

  return 0;
}
