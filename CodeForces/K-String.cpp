#include <bits/stdc++.h>
#include <iostream>

using namespace std;

#define FOR(i, start, end) for (int i = (start); i < (end); i++)
#define ll long long
#define pii pair<int, int>
#define pll pair<ll, ll>
#define vi vector<int>
#define vvi vector<vector<int>>
#define ini(t) \
  int(t);      \
  cin >> t;
#define inll(t) \
  ll(t);        \
  cin >> t;
#define ins(t) \
  string(t);   \
  cin >> t;
#define inp(t) \
  int(t);      \
  cin >> t;

int main() {
  ios_base::sync_with_stdio(0), cin.tie(0), cout.tie(0);

  ini(k);
  ins(s);

  int size_s = s.length();

  int letters[26] = {};

  for (int i = 0; i < size_s; i++) {
    int curr = s[i] - 'a';
    letters[curr]++;
  }

  /* La letra y su frecuencia*/

  vector<char> letter;
  vector<int> freq_letter;
  for (int i = 0; i < 26; i++) {
    if (letters[i] != 0) {
      freq_letter.push_back(letters[i]);
      letter.push_back(i + 'a');
    }
  }

  string base = "";
  for (int i = 0; i < freq_letter.size(); i++) {
    if (freq_letter[i] % k != 0) {
      cout << -1 << "\n";
      return 0;
    }

    for (int j = 0; j < (freq_letter[i] / k); j++)
      base += letter[i];
  }


  string result = "";
  for (int i = 0; i < k; i++)
    result += base;

  cout << result <<"\n";



  return 0;
}
