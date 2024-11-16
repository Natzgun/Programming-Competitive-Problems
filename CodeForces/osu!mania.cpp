#include <iostream>
#include <stack>
using namespace std;

int main() {
  ios_base::sync_with_stdio(0);
  cin.tie(0);

  int cases;
  cin >> cases;

  while (cases--) {

    int rows;
    cin >> rows;

    stack<int> st;
    for (int i = 0; i < rows; i++) {
      string note;
      cin >> note;
      for (int i = 0; i < 4; i++) {
        if (note[i] == '#') {
          st.push(i+1);
        }
      }
    }
    while (!st.empty()) {
      cout << st.top() << " ";
      st.pop();
    }
    cout << endl;
  }

  return 0;
}
