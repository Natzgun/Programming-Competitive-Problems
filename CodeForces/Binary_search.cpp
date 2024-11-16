#include <iostream>
#include <vector>

using namespace std;

int b_search(vector<int>& arr, int low, int high, int x) {
  int mid = (low + high) / 2;
  if (low > high) {
    return -1;
  }
  if (arr[mid] == x) {
    return mid;
  } else if (arr[mid] > x) {
    return b_search(arr, low, mid - 1, x);
  } else {
    return b_search(arr, mid + 1, high, x);
  }
}

int main(int argc, char *argv[]) {
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

    int result = b_search(integers, 0, integers.size() - 1, x);

    if ( result == -1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
    }
  }
  return 0;
}
