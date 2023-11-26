#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int n, x{0};
  string operation = "";
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> operation;
    if (operation == "++X" || operation == "X++") {
      x++;
    } else if (operation == "--X" || operation == "X--") {
      x--;
    }
  }
  cout << x << endl;
  return 0;
}
