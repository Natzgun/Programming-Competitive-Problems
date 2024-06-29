#include <iostream>
#include <map>
#include <utility>
using namespace std;

typedef map<char, int> MAP1;
typedef pair<char, int> PAIR1;

int main() {
  string username;
  cin >> username;

  MAP1 names;
  for (int i = 0; i < username.length(); ++i) {
    names.insert(PAIR1(username[i], i));
  }

  cout << (names.size() % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

  names.clear();
  return 0;
}
