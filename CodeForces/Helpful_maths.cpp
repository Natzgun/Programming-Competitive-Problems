#include <algorithm>
#include <iostream>
using namespace std;

int main() {
  string sum;
  cin >> sum;
  int len_sorted = (sum.size() / 2) + 1;
  int current{0};
  int *numbers = new int[len_sorted];

  for (int i = 0; i < sum.size(); ++i) {
    if (sum[i] >= 48 && sum[i] <= 57) {
      numbers[current] = sum[i] - 48;
      current++;
    }
  }
  sort(numbers, numbers + len_sorted);
  for (int i = 0; i < len_sorted; ++i) {
    cout << numbers[i];
    if (i < len_sorted - 1)
      cout << "+";
  }
  cout << endl;
  return 0;
}
