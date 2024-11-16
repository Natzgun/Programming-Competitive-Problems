#include <cmath>
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
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  while (n--) {
    int x, y;
    int k;
    cin >> x >> y >> k;

    int pasosx = ceil((x * 1.0) / k);
    int pasosy = ceil((y * 1.0) / k);

    pasosx = (pasosx * 2) - 1;

    pasosy = pasosy * 2;

    if (pasosy > pasosx)
      cout << pasosy << endl;
    else
      cout << pasosx << endl;
  }

  return 0;
}
