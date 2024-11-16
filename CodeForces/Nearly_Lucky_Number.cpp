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

  string n;
  cin >> n;

  string lucky;

  for (int i = 0; i < n.length(); i++) {
    if (n[i] == '4' || n[i] == '7') {
      lucky += n[i];
    }
  }

  if (lucky.length() == 7 || lucky.length() == 4) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  return 0;
}
