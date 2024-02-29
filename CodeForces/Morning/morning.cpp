#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string a;
    cin >> a;
    int prev = 1, curr, ans = 0;
    for (int i = 0; i < 4; ++i) {
      curr = a[i] - '0';
      if (curr == 0) {
        curr = 10;
      }
      ans += (abs(curr-prev) + 1);
      prev = curr;
    }
    cout << ans << '\n';
  }
}
