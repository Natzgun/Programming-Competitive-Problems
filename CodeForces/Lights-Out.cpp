#include <iostream>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

int switchValue(int v) { return (v == 0) ? 1 : 0; }

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int out[3][3];
  int in[3][3];

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      out[i][j] = 1;
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> in[i][j];

      if (in[i][j] % 2 != 0) {
        out[i][j] = switchValue(out[i][j]);

        // Derecha
        if (j + 1 < 3) {
          out[i][j + 1] = switchValue(out[i][j + 1]);
        }

        // Izquierda
        if (j - 1 >= 0) {
          out[i][j - 1] = switchValue(out[i][j - 1]);
        }

        // Arriba
        if (i - 1 >= 0) {
          out[i - 1][j] = switchValue(out[i - 1][j]);
        }

        // Abajo
        if (i + 1 < 3) {
          out[i + 1][j] = switchValue(out[i + 1][j]);
        }
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      cout << out[i][j];
    }
    cout << "\n";
  }

  return 0;
}
