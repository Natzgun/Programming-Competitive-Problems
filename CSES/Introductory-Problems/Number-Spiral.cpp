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

// void calculate(long x, long y) {
//   if (x % 2 == 0) {
//     cout << (x * x) - (x - 1) + (x - y) << endl;
//   } else {
//     cout << (x * x) - (x - 1) - (x - y) << endl;
//   }
// }

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ll t;
  cin >> t;

  while (t--) {
    ll x, y;
    cin >> x >> y;

    if (x > y) {
      if (x % 2 == 0) {
        cout << (x * x) - (x - 1) + (x - y) << endl;
      } else {
        cout << (x * x) - (x - 1) - (x - y) << endl;
      }
    } else if (x < y) {
      if (y % 2 == 0) {
        cout << (y * y) - (y - 1) - (y - x) << endl;
      } else {
        cout << (y * y) - (y - 1) + (y - x) << endl;
      }
    } else {
      cout << (x * y) - (x - 1) << endl;
    }
  }

  return 0;
}
