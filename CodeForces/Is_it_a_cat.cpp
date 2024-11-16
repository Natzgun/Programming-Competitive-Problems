#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int main() {
  std::cin.tie(0);
  std::ios_base::sync_with_stdio(0);

  int n;
  cin >> n;

  while (n--) {
    int len;
    cin >> len;
    string maullido = "meow";
    string miau;
    cin >> miau;

    
    for (auto &x : miau) {
      x = tolower(x);
    }

    string shortMiau;
    char lastLetter =' ';

    for (int i = 0; i < len; i++) {
      if (miau[i] != lastLetter) {
        shortMiau += miau[i];
        lastLetter = miau[i];
      }
    }
    cout << (shortMiau == maullido ? "YES" : "NO") << endl;
  }

  return 0;
}
