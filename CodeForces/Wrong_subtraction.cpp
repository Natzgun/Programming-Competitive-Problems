#include <iostream>

int subtraction(int sub, int k_times) {
  for (int i = k_times; i != 0; i--) {
    if (sub % 10 != 0)
      sub--;
    else
      sub = sub / 10;
  }

  return sub;
}

int main() {
  int n, k;
  std::cin >> n >> k;
  std::cout << subtraction(n, k) << std::endl;
  return 0;
}
