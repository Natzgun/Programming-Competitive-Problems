#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char *argv[]) {
  int n;
  string word, tmp;
  cin >> n;
  string *reduced = new string[n];
  for (int i = 0; i < n; ++i) {
    cin >> word;
    if (word.length() > 10) {
      tmp = word[0] + to_string(word.length() - 2) + word[word.length() - 1];
      reduced[i] = tmp;
    } else {
      reduced[i] = word;
    }
    tmp = "";
  }
  for (int i = 0; i < n; ++i) {
    cout << reduced[i] << endl;
  }
  return 0;
}
