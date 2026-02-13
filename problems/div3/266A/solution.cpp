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
  string s;
  cin >> s;

  if (n == 1) {
    cout << 0;
    return 0;
  }

  int ans = 0;

  char curr = s[0];
  for (int i = 1; i < s.size(); i++) {
    if (curr == s[i]) {
      ans++;
    } else {
      curr = s[i];
    }
  }

  cout << ans;
  return 0;
}
