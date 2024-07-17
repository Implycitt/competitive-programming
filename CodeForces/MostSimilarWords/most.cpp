#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<string> words(n);
    for (int i = 0; i < n; ++i) cin >> words[i];
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
      for (int k = i + 1; k < n; ++k) {
        int val = 0;
        for (int j = 0; j < m; ++j) {
          val += abs(words[i][j] - words[k][j]);
        }
        ans = min(ans, val);
      }
    }
    cout << ans << '\n';
  }
}
