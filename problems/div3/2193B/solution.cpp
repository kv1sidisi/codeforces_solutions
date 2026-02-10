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
    int n;
    cin >> n;

    vector<int> v;
    for (int j = 0; j < n; j++) {
      int f;
      cin >> f;
      v.push_back(f);
    }

    int l = -1, r = -1;
    for (int j = 0; j < n; j++) {
      int need = n - j;
      if (v[j] != need) {
        l = j;
        for (int k = j; k < n; k++) {
          if (v[k] == need) {
            r = k;
            break;
          }
        }
        break;
      }
    }
    if (l != -1) {
      reverse(v.begin() + l, v.begin() + r + 1);
    }

    for (int f : v) {
      cout << f << ' ';
    }
    cout << '\n';
  }

  return 0;
}
