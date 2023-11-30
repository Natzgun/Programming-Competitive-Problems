#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  string c1, c2;
  int len;
  cin >> c1 >> c2;
  len = c1.size() + c2.size();

  // Aqui hago una suma de 32 para obtener las minusculas en ASCII
  for (int i = 0; i < c1.size(); ++i) {
    if (c1[i] >= 'A' && c1[i] <= 'Z')
      c1[i] += 32;
  }

  for (int i = 0; i < c2.size(); ++i) {
    if (c2[i] >= 'A' && c2[i] <= 'Z')
      c2[i] += 32;
  }

  if (c1 == c2)
    cout << 0 << endl;
  else if (c1 < c2)
    cout << -1 << endl;
  else
    cout << 1 << endl;

  return 0;
}
