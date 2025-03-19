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

  vi soldiers(n);
  for (int i = 0; i < n; i++) {
    ini(tmp);
    soldiers[i] = tmp;
  }

  int min = 1000;
  int s1{0}, s2{0};
  for (int i = 0; i < n - 1; i++) {
    int curr_min = abs(soldiers[i] - soldiers[i + 1]);
    if (curr_min < min) {
      min = curr_min;
      s1 = i + 1;
      s2 = i + 2;
    }
  }

  int curr_min = abs(soldiers[0] - soldiers[n-1]);
  // cout << curr_min << " gaaa\n";
  // cout << soldiers[0] << " gaaa\n";
  // cout << soldiers[n-1] << " gaaa\n";
  if (curr_min < min) {
    s1 = n;
    s2 = 1;
  }


  cout << s1 << " " << s2 << "\n";

  return 0;
}
