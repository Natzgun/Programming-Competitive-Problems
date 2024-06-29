#include <iostream>

#define MAX 256

using namespace std;

int main() {
  string username;
  cin >> username;
  int count{0}, frequency[MAX];

  for (int i = 0; i < MAX; ++i) {
    frequency[i] = 0;
  }

  for (int i = 0; i < username.length(); ++i) {
    frequency[username[i]]++;
  }

  for (int i = 0; i < MAX; ++i) {
    if (frequency[i] != 0)
      count++;
  }

  // cout << count << endl;
  cout << (count % 2 == 0 ? "CHAT WITH HER!" : "IGNORE HIM!") << endl;

  return 0;
}
