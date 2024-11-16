#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n; cin >> n;
  int min{0};
  int prev{0};
  while (n--) {
    int exit, enter;
    cin >> exit >> enter;

    int op = (prev - exit) + enter;
    prev = op;

    if (prev > min) {
      min = prev;
    }
  }

  cout << min << endl;
  return 0;
}
