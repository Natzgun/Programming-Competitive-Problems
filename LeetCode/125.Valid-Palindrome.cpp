#include <cctype>
#include <iostream>
#include <string>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

class Solution {
public:
  bool isPalindrome(string s) {
    int p_1 = 0;
    int p_2 = s.size() - 1;

    while (p_1 <= p_2) {

      if (!isalnum(s[p_1])) {
        p_1++;
        continue;
      }

      if (!isalnum(s[p_2])) {
        p_2--;
        continue;
      }

      if (tolower(s[p_1]) != tolower(s[p_2])) {
        return false;
      }

      p_1++;
      p_2--;
    }

    return true;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
