#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
  int k, n, cont{0};
  cin >> n >> k;
  int *score = new int[n];
  for (int i = 0; i < n; ++i) {
    cin >> score[i];
  }

  for (int i = 0; i < n; ++i) {
    if ((score[i] >= score[k - 1]) && (score[i] > 0))
      cont++;
  }

  cout << cont << endl;
  delete[] score;
  return 0;
}
