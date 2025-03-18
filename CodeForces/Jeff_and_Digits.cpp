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
  int cont_5{0}, cont_0{0};

  for (int i = 0; i < n; i++) {
    char curr;
    cin >> curr;
    if (curr == '5')
      cont_5++;
    else
      cont_0++;
  }

  if (cont_0 == 0) {
    cout << -1 << "\n";
    return 0;
  }

  if (cont_5 < 9) {
    cout << 0 << "\n";
    return 0;
  }

  int max_5 = cont_5 % 9;
  cont_5 -= max_5;

  while (cont_5--)
    cout << 5;

  while (cont_0--) {
    cout << 0;
  }

  cout << "\n";


  return 0;
}
