#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, ans = -1;
    cin >> n;
    vector<int> nums(n+1, 0);
    for (int i = 0; i < n; ++i) {
      int x; cin >> x;
      if (++nums[x] >= 3) ans = x;
    }
    cout << ans << '\n';
  }
}
