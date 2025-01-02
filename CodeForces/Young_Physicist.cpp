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

class Vec {
  int e[3];
public:
  Vec(int x, int y, int z) : e{x,y,z} {}
  Vec& operator+=(const Vec& v) {
    e[0] += v.e[0];
    e[1] += v.e[1];
    e[2] += v.e[2];
    return *this;
  }

  int x() const {return e[0];}
  int y() const {return e[1];}
  int z() const {return e[2];}

};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(n);
  Vec sum(0,0,0);
  while (n--) {
    int x, y, z;
    cin >> x >> y >> z;
    Vec tmp(x,y,z);
    sum += tmp;
  }

  if (sum.x() == 0 && sum.y() == 0 && sum.z() == 0) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }

  return 0;
}
