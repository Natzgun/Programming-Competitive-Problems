#include <algorithm>
#include <iostream>
using namespace std;

class Solution {
public:
  int findMinimumOperations(string s1, string s2, string s3) {

    int total = s1.length() + s2.length() + s3.length();

    int min = std::min({s1.length(), s2.length(), s3.length()});

    int i = 0;
    while (i < min) {
      if (s1[i] == s2[i] && s2[i] == s3[i]) {
        i++;
      } else {
        break;
      }
    }
    return (i > 0) ? total - (i * 3) : -1;
  }
};

int main(int argc, char *argv[]) { return 0; }
