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

  ins(n);

  if (n[0] == '4') {
    cout << "NO\n";
    return 0;
  }

  int cont{0};
  for (int i = 0; i < n.length(); i++) {
    if (n[i] != '1' && n[i] != '4') {
      cout << "NO\n";
      return 0;
    }

    if (n[i] == '4')
      cont++;
    else
      cont = 0;

    if (cont == 3) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";


  return 0;
}
