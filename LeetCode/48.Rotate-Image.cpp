#include <iostream>
#include <vector>
using namespace std;

#define SFOR(start, end) for (int i = (start); i < (end); i++)
#define CFOR(i, start, end) for (int(i) = (start); (i) < (end); (i)++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>

class Solution {
public:
  void swap(int *a, int *b) {
    int tmp = *a;
    *a = *b;
    *b = tmp;
  }

  void rotate(vector<vector<int>> &matrix) {
    int n = matrix[0].size();
    // Transposition
    CFOR(i, 0, n) {
      CFOR(j, i + 1, n) { swap(&matrix[i][j], &matrix[j][i]); }
    }

    int mid = n / 2;
    CFOR(i, 0, n) {
      for (int j = 0; j < mid; j++) {
        swap(&matrix[i][j], &matrix[i][n - j - 1]);
      }
    }
  }
};

void printMatrix(const vvi &matrix) {
  for (const vi &row : matrix) {
    for (int num : row) {
      cout << num << " ";
    }
    cout << endl;
  }
}

int main() {
  vvi matrix = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}};

  Solution sol;

  printMatrix(matrix);

  sol.rotate(matrix);

  cout << "\n";
  printMatrix(matrix);

  return 0;
}
/*int main() {*/
/*  std::cin.tie(nullptr);*/
/*  std::ios_base::sync_with_stdio(false);*/
/*  return 0;*/
/*}*/
