#include <iostream>
#include <utility>
#include <vector>

using namespace std;

using ll = long long;
using pii = pair<int, int>;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  vector<vector<int>> matrix(5, vector<int>(5));

  int iposx;
  int iposy;
  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      int n;
      cin >> n;
      if (n == 1) {
        iposx = j + 1;
        iposy = i + 1;
      }
      matrix[i][j] = n;
    }
  }

  cout << abs(3 - iposx) + abs(3 - iposy);
  return 0;
}
