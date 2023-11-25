#include <iostream>
#include <vector>
using namespace std;

int searchInsert(vector<int>& nums, int target) {
  int right, left, middle;
  left = 0;
  right = nums.size() - 1;
  if (target>nums[right])
    return right+1;

  while (left <= right) {
    middle = (left + right) / 2;
    if (target > nums[middle] )
      left = middle + 1;
    else if (target < nums[middle])
      right = middle - 1;
    else
      return middle;
  }
  return left;
}

int main (int argc, char *argv[]) {
  int target;
  vector <int> test;
  for (int i = 0; i < 5; ++i) {
    test.push_back(i);
  }
  cin >> target;
  searchInsert(test, target);
  
  return 0;
}
