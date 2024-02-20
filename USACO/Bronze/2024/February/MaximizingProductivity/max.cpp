#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, q;
  cin >> n >> q;
  vector<int> close(n);
  vector<int> visit(n);
  for (int i = 0; i < n; ++i) {
    cin >> close[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> visit[i];
  }
  while (q--) {
    int v, s;
    int sum = 0;
    cin >> v >> s;
    for (int i = 0; i < n; ++i) {
      int copyi = visit[i] + s;
      if (copyi < close[i]) {
        sum++;
      }
    }
    if (sum >= v) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}