#include <vector>
using namespace std;

class Solution {
 public:
  int missingNumber(vector<int>& nums) {
    int n = nums.size();
    int total = (long long)n * (n + 1) / 2;

    int sum{0};
    for (auto x: nums) {
      sum += x;
    }

    return total - sum;

  }
};
