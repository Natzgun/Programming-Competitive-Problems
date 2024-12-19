#include <iostream>
#include <string>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  string dna;
  cin >> dna;

  ll max = 1;
  ll maxtmp = 1;
  for (size_t i = 0; i < dna.size() - 1; i++) {
    if (dna[i] == dna[i + 1]) {
      maxtmp++;
    } else {
      max = maxtmp > max ? maxtmp : max;
      maxtmp = 1;
    }
  }

  cout << (maxtmp > max ? maxtmp : max) << endl;

  return 0;
}
