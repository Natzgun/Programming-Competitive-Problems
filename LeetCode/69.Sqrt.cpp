#include <iostream>
using namespace std;

class Solution {
 public:
  int mySqrt(int x) {
    if (x < 2) return x;

    int left = 1;
    int right = x / 2;

    int mid;

    while (left <= right) {
      mid = (left + right) / 2;
      if ((long long)mid * mid <= x) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    return right;
  }
};

int main(int argc, char *argv[]) {
  Solution s;
  cout << s.mySqrt(12) << endl;
  return 0;
}
