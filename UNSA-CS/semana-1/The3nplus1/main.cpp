#include <iostream>

int main() {
  while (!std::cin.eof()) {
    int num1, num2;
    std::cin >> num1 >> num2;
    std::cout << num1 + num2 << std::endl;
  }
  return 0;
}
