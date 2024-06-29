#define CFOR(i, start, end) for (int(i) = (start); (i) < (end); (i)++)

void swap(int *a, int *b) {
  int tmp = *a;
  *a = *b;
  *b = tmp;
}
void rotate(int **matrix, int matrixSize, int *matrixColSize) {
  // Transposition
  CFOR(i, 0, matrixSize) {
    CFOR(j, i + 1, *matrixColSize) { swap(&matrix[i][j], &matrix[j][i]); }
  }

  int mid = *matrixColSize / 2;
  CFOR(i, 0, matrixSize) {
    for (int j = 0; j < mid; j++) {
      swap(&matrix[i][j], &matrix[i][matrixSize - j - 1]);
    }
  }
}

  /*void printMatrix(const vvi &matrix) {*/
  /*  for (const vi &row : matrix) {*/
  /*    for (int num : row) {*/
  /*      cout << num << " ";*/
  /*    }*/
  /*    cout << endl;*/
  /*  }*/
  /*}*/

  /*int main() {*/
  /*  std::cin.tie(nullptr);*/
  /*  std::ios_base::sync_with_stdio(false);*/
  /*  return 0;*/
  /*}*/
