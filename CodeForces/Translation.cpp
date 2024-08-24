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

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  string s, t;
  cin >> s >> t;

  int lenS = s.size();
  int lenT = t.size();

  if (lenS != lenT) {
    cout << "NO" << "\n";
    return 0;
  }

  for (int i = 0; i < lenS; ++i) {
    if (s[i] != t[lenS - i - 1]) {
      cout << "NO" << "\n";
      return 0;
    }
  }

  cout << "YES" << "\n";

  return 0;
}
