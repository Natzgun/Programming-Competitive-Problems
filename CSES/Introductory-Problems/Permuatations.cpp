#include <iostream>
#include <vector>
using namespace std;
 
#define ll long long
 
void generate(vector<ll> &nums, int n) {
  for (int i = 1; i <= 2; i++) {
    for (ll j = i; j <= n; j += 2) {
      nums.push_back(j);
    }
  }
}
 
void print(vector<ll> &nums) {
  for (auto i : nums) {
    cout << i << " ";
  }
  cout << endl;
}
 
int main(int argc, char *argv[]) {
  int n;
  cin >> n;
 
  vector<ll> nums;
  if (n > 4 || n == 1) {
    generate(nums, n);
    print(nums);
  } else if (n == 4) {
 
    generate(nums, n);
    for (int i = 0; i < n - 1; i += 2) {
      int tmp = nums[i];
      nums[i] = nums[i + 1];
      nums[i + 1] = tmp;
    }
    print(nums);
  } else {
    cout << "NO SOLUTION" << endl;
  }
 
  return 0;
}
