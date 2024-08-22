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

int minElephant(int x) {
  int min = 0;

  for (int i = 5; i > 0; --i) {
    min += x / i;
    x %= i;
    if (x == 0) break;
  }
  return min;
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int x;
  cin >> x;

  cout << minElephant(x) << "\n";

  return 0;
}
