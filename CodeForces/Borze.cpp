#include <bits/stdc++.h>
#include <string>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t) int(t); cin >> t;
#define inll(t) ll(t); cin >> t;
#define ins(t) string(t); cin >> t;
#define inp(t) int (t); cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ins(borze);

  for (size_t i = 0; i < borze.length(); i++) {
    string tmp = string(1,borze[i]) + string(1,borze[i + 1]);
    if (tmp == "-.") {
      cout << 1;
      i++;
    } else if (tmp == "--") {
      cout << 2;
      i++;
    } else {
      cout << 0;
    }
  }
  cout << "\n";

  return 0;
}