#include <algorithm>
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
  string longestCommonPrefix(vector<string> &strs) {
    auto minStr = min_element(strs.begin(), strs.end());
    string min = *minStr;

    string ans = "";
    char tmp = strs[0][0];

    FOR(i, 0, min.length()) {
      FOR(j, 1, strs.size()) {
        if (strs[j][i] != tmp) {
          return ans;
        }
      }
      ans += tmp;
      tmp = strs[0][i + 1];
    }

    return ans;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
