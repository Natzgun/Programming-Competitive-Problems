#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  int removeDuplicates(vector<int> &nums) {
    int n = nums.size();
    set<int> duplicates;

    for (int i = 0; i < n; i++) {
      duplicates.insert(nums[i]);
    }

    int k = duplicates.size();

    int j = 0;
    for (const auto &i : duplicates) {
      nums[j++] = i;
    }

    return k;
  }
};

int main(int argc, char *argv[]) { return 0; }
