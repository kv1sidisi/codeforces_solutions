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

  int t;
  cin >> t;

  for (int i = 0; i < t; i++) {

    int n, s, x;
    cin >> n >> s >> x;

    int sum = 0;

    for (int i = 0; i < n; i++) {
      int f;
      cin >> f;
      sum += f;
    }

    int d = s - sum;
    if (d >= 0 && d % x == 0) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
  return 0;
}
