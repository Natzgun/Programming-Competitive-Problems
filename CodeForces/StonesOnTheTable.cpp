#include <iostream>
#include <string>
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

  string stones;
  int n;
  cin >> n;
  cin >> stones;

  char tmp = stones[0];
  int count{0};

  for (int i = 1; i < n; ++i) {
    if (stones[i] == tmp) {
      count++;
    }
    tmp = stones[i];
  }

  cout << count << "\n";

  return 0;
}
