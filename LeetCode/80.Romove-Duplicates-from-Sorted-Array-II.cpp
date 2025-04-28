#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int k = 1;
    int count = 1;

    for (int j = 1; j < nums.size(); j++) {

      if (nums[j] == nums[j - 1])
        count++;
      else
        count = 1;

      if (count <= 2)
        nums[k++] = nums[j];

      // if (nums[k] == nums[j] && (count < 2)) {
      //   nums[++k] = nums[j];
      //   count++;
      // }
      //
      // if (nums[k] != nums[j]) {
      //   nums[++k] = nums[j];
      //   count = 1;
      // }
    }

    return k;
  }
};
