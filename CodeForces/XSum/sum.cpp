#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    int board[n][m];
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) cin >> board[i][j];
    }

    int mx = 0;
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < m; ++j) {
        int curr = 0;
        int ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          curr += board[ci][cj];
          --ci; --cj;
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          curr += board[ci][cj];
          ++ci; --cj;
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          curr += board[ci][cj];
          --ci; ++cj;
        }
        ci = i, cj = j;
        while (ci >= 0 && ci < n && cj >= 0 && cj < m) {
          curr += board[ci][cj];
          ++ci; ++cj;
        }
        curr -= board[i][j]*3;
        mx = max(mx, curr);
      }
    }
    cout << mx << '\n';
  }
}
