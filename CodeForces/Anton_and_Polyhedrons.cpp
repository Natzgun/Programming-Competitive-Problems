#include <bits/stdc++.h>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t)                                                                 \
  int(t);                                                                      \
  cin >> t;
#define inll(t)                                                                \
  ll(t);                                                                       \
  cin >> t;
#define ins(t)                                                                 \
  string(t);                                                                   \
  cin >> t;
#define inp(t)                                                                 \
  int(t);                                                                      \
  cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);
  map<string, int> polyhedron = {{"Tetrahedron", 4},
                                 {"Cube", 6},
                                 {"Octahedron", 8},
                                 {"Dodecahedron", 12},
                                 {"Icosahedron", 20}};

  int count{0};
  while (n--) {
    ins(s);
    count += polyhedron[s];
  }

  cout << count << "\n";

  return 0;
}
