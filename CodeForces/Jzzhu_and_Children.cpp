#include <bits/stdc++.h>

#include <queue>
#include <stack>
#include <utility>
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
  ini(m);

  queue<pii> children;
  stack<int> w_candies;

  for (size_t i = 0; i < n; i++) {
    ini(current);
    pii child = {current, i + 1};
    children.push(child);
  }

  while (!children.empty()) {
    pii child = children.front();
    if (child.first <= m) {
      w_candies.push(child.second);
      children.pop();
    } else {
      child.first -= m;
      children.push(child);
      children.pop();
    }
  }

  cout << w_candies.top() << "\n";

  return 0;
}
