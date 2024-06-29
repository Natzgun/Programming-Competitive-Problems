#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

class Solution {
public:
  int majorityElement(vector<int> &nums) {
    map<int, int> cont;
    for (int num : nums) {
      cont[num]++;
    }

    int max_element = nums[0];
    int max_count = 0;

    for (const auto &par : cont) {
      if (par.second > max_count) {
        max_count = par.second;
        max_element = par.first;
      }
    }

    return max_element;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
