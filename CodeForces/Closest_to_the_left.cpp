#include <iostream>
#include <ostream>
#include <vector>

using namespace std;

int b_search(vector<int>& arr, int x) {
  int left = -1;
  int right = arr.size();

  while (left + 1 < right) {
    int mid = (left + right) / 2;
    if (arr[mid] < x) {
      left = mid;
    } else {
      right = mid;
    }
  }

  return right + 1;
}

int main(int argc, char* argv[]) {

  int n, k;
  cin >> n >> k;

  vector<int> integers;

  while (n--) {
    int tmp;
    cin >> tmp;
    integers.push_back(tmp);
  }

  while (k--) {
    int x;
    cin >> x;

    int result = b_search(integers, x);

    cout << result << "\n";
  }
  return 0;
}
