#include <iostream>
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
  int removeElement(vector<int> &nums, int val) {
    int p_1 = 0;
    int p_2 = nums.size() - 1;

    while (p_1 <= p_2) {
      if (nums[p_1] == val) {
        swap(nums[p_1], nums[p_2]);
        p_2--;
      } else {
        p_1++;
      }
    }

    return p_1;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
