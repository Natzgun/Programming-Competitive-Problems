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

bool is_prime(int x) {
  if (x <= 1) {
    return false;
  }

  for (int i = 2; i * i <= x; i++) {
    if (x % i == 0) {
      return false;
    }
  }
  return true;
}

int n_prime(int n ,int m) {
  for (int i = n+1 ; i <= m; i++) {
    if (is_prime(i)) {
      return i;
    }
  }
  return -1;
}


int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  int n, m;
  cin >> n >> m;


  if (n_prime(n, m) == m) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }


  return 0;
}
