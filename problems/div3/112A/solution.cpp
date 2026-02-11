#include <algorithm>
#include <cctype>
#include <iostream>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  string s1;
  string s2;

  cin >> s1;
  cin >> s2;

  std::transform(s1.begin(), s1.end(), s1.begin(),
                 [](unsigned char c) { return tolower(c); });

  std::transform(s2.begin(), s2.end(), s2.begin(),
                 [](unsigned char c) { return tolower(c); });

  cout << s1 << " " << s2;
  for (int i = 0; i < s1.size(); i++) {
    if (s1[i] > s2[i]) {
      cout << 1;
      return 0;
    }
    if (s1[i] < s2[i]) {
      cout << -1;
      return 0;
    }
  }

  cout << 0;

  return 0;
}
