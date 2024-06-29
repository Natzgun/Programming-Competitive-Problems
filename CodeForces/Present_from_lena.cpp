#include <iostream>
#include <string>
#include <vector>
using namespace std;

#define FOR(var, start, end) for (int (var) = (start); i < (end); i++)
#define VEC vector<int>

#include <iostream>
using namespace std;

void crearMatriz(int **&M, int f, int c){
  M = new int*[f];
  for (int i = 0; i < f; i++) {
    M[i] = new int[c];
  }
}

void ingresar(int **&M, int f, int c) {
  int n = (f/2);
  int ni = n;
  for (int x = 0; x < f; x++) {
    for (int y = 0 ; y < c; y++) {
      if (x <= n) {
        M[x][y] = x;
      } else {
        M[x][y] = ni;
      }
    }
  }
  cout << endl;
}

void mostrar_matriz(int **&M,int f,int c){
  for(int i=0;i<f;i++){
    for(int j=0;j<c;j++){
      cout<<M[i][j]<<" ";
    }
    cout<<endl;
  }
}

int main () {
  int **matriz;
  int n;
  cin >> n;
  int f,c;
  f = c = n * 2 + 1;
  crearMatriz(matriz,f,c);
  ingresar(matriz,f,c);
  mostrar_matriz(matriz,f,c);
  return 0;
}

