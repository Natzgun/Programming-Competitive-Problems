#include <string>

using namespace std;

class Solution {
public:
  int lengthOfLastWord(string s) {
    int n = s.length() - 1;
    int len = 0;
    while (n >= 0) {
      if (s[n] == ' ') {
        if (len > 0)
          break;
      } else {
        len++;
      }
      n--;
    }
    return len;
  }
};

int main(int argc, char *argv[]) { return 0; }
