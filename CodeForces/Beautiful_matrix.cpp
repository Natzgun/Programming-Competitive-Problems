#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int one;

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> one;
      if (one == 1) {
        cout << abs(2 - i) + abs(2 - j) << endl;
        break;
      }
    }
  }
  return 0;
}
