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
  bool isSubsequence(string s, string t) {
    int cont = s.length();

    int p_1 = 0;

    int p_2 = 0;

    while (p_2 < t.length()) {
      if (s[p_1] == t[p_2]) {
        cont--;
        p_1++;
        p_2++;
      } else {
        p_2++;
        continue;
      }
    }

    return (cont == 0) ? true : false;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
