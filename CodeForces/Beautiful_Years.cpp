#include <iostream>
#include <string>
#include <unordered_map>

using namespace std;

bool isDistinct(string y) {
  unordered_map<char, bool> digits;

  for (int i = 0; i < 4; i++) {
    if (digits[y[i]] == true) {
      return false;
    }
    digits[y[i]] = true;
  }
  return true;
}

int main (int argc, char *argv[]) {
  int y;
  cin >> y;

  string year;
  while (true) {

    y++;
    year = to_string(y);
    if (isDistinct(year) == true) {
      break;
    }
  }

  cout << y << endl;
  
  return 0;
}
