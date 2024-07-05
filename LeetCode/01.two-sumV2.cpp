#include <algorithm>
#include <iostream>
#include <map>
#include <unordered_map>
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
  vector<int> twoSum(vector<int> &nums, int target) {
    unordered_map<int, int> pos;

    for (int i = 0; i < nums.size(); i++) {
      int complement = target - nums[i];
      if (pos.find(complement) != pos.end()) {
        return {pos[complement], i};
      }
      pos[nums[i]] = i;
    }
    return {};
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
