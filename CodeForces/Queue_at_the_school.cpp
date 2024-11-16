#include <iostream>
#include <utility>

using namespace std;

int main(int argc, char *argv[]) {
  int n, t;
  cin >> n >> t;

  string queue;
  cin >> queue;

  while (t--) {
    for (int i = 0; i < n - 1; i++) {
      char current = queue[i];

      if (queue[i + 1] == 'G') {
        swap(queue[i], queue[i + 1]);
        i++;
      }
    }
  }

  cout << queue << endl;

  return 0;
}
