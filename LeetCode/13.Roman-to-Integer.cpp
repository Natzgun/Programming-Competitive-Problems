#include <iostream>
#include <map>
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
  int romanToInt(string s) {
    int value = 0;

    map<char,int> romans;
    romans['I'] = 1;
    romans['V'] = 5;
    romans['X'] = 10;
    romans['L'] = 50;
    romans['C'] = 100;
    romans['D'] = 500;
    romans['M'] = 1000;

    FOR(i, 0, s.size()) {
      if (romans[s[i]] < romans[s[i+1]]) {
        value += romans[s[i+1]] - romans[s[i]];
        i++;
      } else {
        value += romans[s[i]];
      }
    }
    
    return value;
  }
};

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  return 0;
}
