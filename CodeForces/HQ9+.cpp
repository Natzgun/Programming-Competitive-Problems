#include <bits/stdc++.h>

#include <map>
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

  ins(code);

  map<char, bool> syntax;
  syntax['H'] = true;
  syntax['Q'] = true;
  syntax['9'] = true;
  syntax['+'] = false;

  for (size_t i = 0; i < code.length(); i++) {
    if (syntax[code[i]]) {
      cout << "YES\n";
      return 0;
    }
  }

  cout << "NO\n";

  return 0;
}
