#include <algorithm>
#include <iostream>
#include <iterator>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n;
  cin >> n;

  bool exists[n];

  FOR(i, 0, n) { exists[i] = false; }

  FOR(i, 0, n - 1) {
    int tmp;
    cin >> tmp;
    exists[tmp - 1] = true;
  }

  FOR(i, 0, n) {
    if (!exists[i]) {
      cout << i + 1 << "\n";
      break;
    }
  }

  return 0;
}
