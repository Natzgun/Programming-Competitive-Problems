#include <cstddef>
#include <iostream>
#include <stack>
#include <vector>
using namespace std;
 
int main(int argc, char *argv[]) {
  long long n;
  cin >> n;
 
  vector<long long> nums;
 
  while (n--) {
    long long tmp;
    cin >> tmp;
    nums.push_back(tmp);
  }
 
  stack<long long> missings;
  for (size_t i = 0; i < nums.size() - 1; i++) {
    if (nums[i] > nums[i + 1]) {
      long long distance = (nums[i] - nums[i + 1]);
      missings.push(distance);
      nums[i + 1] = nums[i];
    }
  }
 
  if (missings.empty()) {
    cout << 0 << endl;
    return 0;
  }
 
  long long sum{0};
  while (!missings.empty()) {
    // cout << missings.top() << " ";
    sum += missings.top();
    missings.pop();
  }
  cout << sum << endl;
  return 0;
}
