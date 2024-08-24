#include <iostream>
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

  int a,b;
  int count = 0;

  cin >> a >> b;

  while (a <= b) {
    a *= 3;
    b *= 2;
    count++;
  }

  cout << count << "\n";

  return 0;
}
