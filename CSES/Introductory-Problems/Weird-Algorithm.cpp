#include <algorithm>
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
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ll n;
  cin >> n;

  while (n > 1) {
    cout << n << " ";
    if (n % 2 == 0)
      n /= 2;
    else
      n = (n * 3) + 1;
  }

  cout << n <<"\n";

  return 0;
}
