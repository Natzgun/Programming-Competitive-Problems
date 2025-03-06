#include <bits/stdc++.h>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t) \
  int(t);      \
  cin >> t;
#define inll(t) \
  ll(t);        \
  cin >> t;
#define ins(t) \
  string(t);   \
  cin >> t;
#define inp(t) \
  int(t);      \
  cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);

  // solo hay un elemento por lo tanto no se cuenta
  if (n == 1) {
    cout << 0 << "\n";
    return 0;
  }

  int min{0}, max{0};

  int not_cons, invariable;

  cin >> not_cons;
  n--;

  do {
    // caso donde todos son iguales
    if (n == 0) {
      cout << 0 << "\n";
      return 0;
    }
    cin >> invariable;
    n--;
  } while (not_cons == invariable);

  if (invariable > not_cons) {
    max = invariable;
    min = not_cons;
  } else {
    max = not_cons;
    min = invariable;
  }

  int awesome = 1;

  for (size_t i = 0; i < n; i++) {
    ini(current);

    if (current > max) {
      max = current;
      awesome++;
    } else if (current < min) {
      min = current;
      awesome++;
    } else {
      continue;
    }
  }

  cout << awesome << "\n";

  return 0;
}
