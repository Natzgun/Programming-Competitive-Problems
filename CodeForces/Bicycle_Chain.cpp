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

  ini(n);
  vi pedal(n);

  FOR(i, 0, n) {
    ini(tmp);
    pedal[i] = tmp;
  }

  ini(m);
  vi axle(m);

  FOR(i, 0, m) {
    ini(tmp);
    axle[i] = tmp;
  }

  vi wins;

  FOR(j, 0, m) {
    FOR(i, 0, n) {
      if (axle[j] % pedal[i] == 0) {
        int gear_ratio = axle[j] / pedal[i];
        wins.push_back(gear_ratio);
        break;
      }
    }
  }

  int max_v = *max_element(wins.begin(), wins.end());
  int cont = count(wins.begin(), wins.end(), max_v);

  cout << cont << "\n";


  return 0;
}
