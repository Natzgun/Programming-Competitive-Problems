#include <iostream>
#include <vector>

using namespace std;


// Solution 1
/*bool isPalindrome(int x) {
  if (x < 0)
    return false;
  vector<int> aux;  
  while (x > 0) {
    int mod = x % 10;
    aux.push_back(mod);
    x = x / 10;
  }

  for (int i = 0; i < aux.size(); i++) {
    if (aux[i] != aux[aux.size() - i - 1]) {
      return false;
    }
  }
  return true;
}*/

// Solution 2
bool isPalindrome(int x) {
  if (x < 0)
    return false;
  int reverse{0};  
  while (x > 0) {
    int mod = x % 10;
    reverse = reverse*10 + mod;
    x = x / 10;
  }

  if (x == reverse)
    return true;
  return false;
}

int main () {
  int n;
  cout << "Number: "; cin >> n;
  isPalindrome(n);
  return 0;
}
