#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++) {
    string word;
    cin >> word;

    int wl = word.size();
    if (wl <= 10) {
      cout << word;
      continue;
    }

    char newWord[4];
    newWord[0] = word[0];
    newWord[3] = word[wl - 1];

    wl = wl - 2;

    int tens = wl / 10;
    int ones = wl % 10;

    newWord[1] = tens + '0';
    newWord[2] = ones + '0';

    string s(newWord, 4);
    cout << s;
  }

  return 0;
}
