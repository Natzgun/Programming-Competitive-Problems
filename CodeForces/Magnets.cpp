#include <iostream>

using namespace std;

int main (int argc, char *argv[]) {
  int n;
  cin >> n; 

  int cont{1};

  string lastIman;
  cin >> lastIman;
  n--;

  while (n--) {
    string iman;
    cin >> iman;

    if (iman != lastIman) {
      cont++;
      lastIman = iman;
    }
  }

  cout << cont << endl;
  return 0;
}
