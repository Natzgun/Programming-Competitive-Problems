#include <bits/stdc++.h>
#include <algorithm>
#include <cstddef>
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

  ins(a);
  ins(b);
  ins(unorder);

  string two_persons = a + b;

  sort(two_persons.begin(), two_persons.end());
  sort(unorder.begin(), unorder.end());

  int maximum =  max(two_persons.length(), unorder.length());
  for (size_t i = 0; i < maximum; i++) {
    if (two_persons[i] != unorder[i]) {
      cout << "NO\n";
      return 0;
    }
  }

  cout << "YES\n";

  return 0;
}
