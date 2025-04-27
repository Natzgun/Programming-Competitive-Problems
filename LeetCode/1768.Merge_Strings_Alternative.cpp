#include <algorithm>
#include <iostream>

using namespace std;

class Solution {
public:
  string mergeAlternately(string word1, string word2) {

    string result;
    int i = 0, j = 0;
    int n = word1.size(), m = word2.size();

    while (i < n || j < m) {
      if (i < n)
        result += word1[i++];
      if (j < m)
        result += word2[j++];
    }

    return result;
    // string result = "";
    // int maximum = max(word1.length(), word2.length());
    // int minimum = min(word1.length(), word2.length());
    //
    // string rest = "";
    //
    // if (maximum == minimum) {
    //   rest = "";
    // } else if (word1.length() == maximum) {
    //   rest = word1.substr(minimum);
    // } else {
    //   rest = word2.substr(minimum);
    // }
    //
    // for (int i = 0; i < minimum; i++) {
    //   result += word1[i];
    //   result += word2[i];
    // }
    //
    // return result + rest;
  }
};

int main(int argc, char *argv[]) { return 0; }
