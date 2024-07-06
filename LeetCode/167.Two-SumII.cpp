#include <iostream>
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
  vector<int> twoSum(vector<int> &numbers, int target) {
    int p_1 = 0;
    int p_2 = numbers.size() - 1;

    while (p_1 <= p_2) {
      int sum = numbers[p_1] + numbers[p_2];
      if (sum == target) {
        return {p_1 + 1, p_2 + 1};
      } else if (sum < target) {
        p_1++;
      } else {
        p_2--;
      }
    }

    return {};
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
