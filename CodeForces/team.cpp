#include <iostream>
#define TEAM 3
using namespace std;

int main(int argc, char *argv[]) {
  int n_problems, sure_p;
  int cont_ones{0}, cont_prob{0}, cont_group{0};
  cin >> n_problems;

  for (int i = 0; i < (TEAM * n_problems); i++) {
    cin >> sure_p;
    if (sure_p == 1)
      cont_ones++;

    cont_group++;

    if (cont_group == TEAM) {
      if (cont_ones >= 2)
        cont_prob++;
      cont_group = 0;
      cont_ones = 0;
    }
    // if (cont_group == 3 && cont_ones >= 2) {
    //   cont_prob++;
    //   cont_ones = 0;
    //   cont_group = 0;
    // } else if (cont_group == 3) {
    //   cont_group = 0;
    //   cont_ones = 0;
    // }
  }
  cout << cont_prob << endl;
  return 0;
}

/* La clave de este problema es contar el numero de UNOS,
 * contar grupos de 3
 * y si en ese grupo de 3 y cant de UNOS mayores que 2,
 * entonces cuenta como un problema, PERO si solo hay
 * un grupo de 3 pero no hay UNOS suficientes entonces
 * el grupo y los numeros de 1 deben reiniciarse para
 * poder pasar al siguiente grupo */
