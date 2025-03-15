#include <bits/stdc++.h>
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

  inll(n);
  inll(m);

  ll min_steps{0};
  ll curr_house = 1;
  for (ll i = 0; i < m; i++) {
    inll(to_house);

    if (curr_house <= to_house) {
      min_steps += (to_house - curr_house);
    } else {
      min_steps += ((n - curr_house) + to_house);
    }
    curr_house = to_house;
  }

  cout << min_steps << "\n";

  return 0;
}
