#include <bits/stdc++.h>

#include <map>
#include <stack>
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

class Solution {
 public:
  bool isValid(string s) {

    map<char, char> characters;
    characters['('] = ')';
    characters['{'] = '}';
    characters['['] = ']';

    stack<char> valchars;

    for (char &c : s) {
      if (c == '(' || c == '{' || c == '[') {
        valchars.push(c);
      } else {
        if (valchars.empty()) return false;
        
        char last = valchars.top();
        if (characters[last] == c) {
          valchars.pop();
        } else {
          return false;
        }
      }
    }

    return valchars.empty();
  }
};

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  return 0;
}
