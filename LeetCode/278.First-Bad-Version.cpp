
class Solution {
 public:
  int firstBadVersion(long long x) {

    long long left = 1;
    long long right = x;

    long long mid;

    while (left <= right) {
      mid = (left + right) / 2;
      if (!isBadVersion(mid)) {
        left = mid + 1;
      } else {
        right = mid - 1;
      }
    }

    return right;
  }
};

