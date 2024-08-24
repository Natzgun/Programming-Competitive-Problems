#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>


string sum() {
  int num;
  vi nums;

  for (int i = 0; i < 3; i++) {
    cin >> num;
    nums.push_back(num);
  }

  sort(nums.begin(), nums.end());

  if (nums[0] + nums[1] != nums[2])
    return "NO";
  return "YES";
}

int main() {
  std::cin.tie(nullptr);
  std::ios_base::sync_with_stdio(false);

  int n;
  cin >> n;

  vector<string> yesNo;

  while (n > 0) {
    yesNo.push_back(sum());
    n--;
  }

  for (int i = 0; i < yesNo.size(); i++) {
    cout << yesNo[i] << "\n";
  }


  return 0;
}
