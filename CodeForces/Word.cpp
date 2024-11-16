#include <cctype>
#include <iostream>
using namespace std;

string sToLower(string s) {
  for (auto& i : s) {
    i = tolower(i);
  }
  return s;
}

string sToUpp(string s) {
  for (auto& i : s) {
    i = toupper(i);
  }
  return s;
}

int main () {
  string word;
  cin >> word;

  int upper{0}, lower{0};
  for (int i = 0; i < word.length(); i++) {
    if (word[i] >= 'a' && word[i] <= 'z') {
      lower++;
    } else {
      upper++;
    }
  }

  if (upper > lower) {
    cout << sToUpp(word) << endl;
  } else {
    cout << sToLower(word) << endl;
  }

  return 0;
}
