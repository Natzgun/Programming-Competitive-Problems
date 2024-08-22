#include <iostream>
using namespace std;

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int k, n, w;
  cin >> k >> n >> w;

  int prest = 0;

  for (int i = 1; i <= w; i++) {
    prest += (i * k);
  }

  cout << (n > prest ? 0 : prest - n) << "\n";

  return 0;
}
