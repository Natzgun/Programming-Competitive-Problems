#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
  int n;
  string games;
  cin >> n;
  cin >> games;

  int wins[2] = {0,0};

  for (int i = 0; i < n; ++i) {
    if (games[i] == 'A') {
      wins[0]++;
    } else {
      wins[1]++;
    }
  }

  if (wins[0] == wins[1]) {
    cout << "Friendship" << endl;
  } else if (wins[0] > wins[1]) {
    cout << "Anton" << endl;
  } else {
    cout << "Danik" << endl;
  }

  return 0;
}
