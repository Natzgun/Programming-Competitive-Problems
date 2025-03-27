#include <bits/stdc++.h>
#include <map>
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

  map<string, int> teams;

  while (n--) {
    ins(tmp);
    teams[tmp]++;
  }

  int max = 0;
  string team = "";
  for (auto &t : teams) {
    // cout << t.first << " " << t.second << "\n";
    if (t.second > max) {
      max = t.second;
      team = t.first;
    }
  }

  cout << team << "\n";

  return 0;
}
