#include <bits/stdc++.h>

using namespace std;

template<typename type> type Round(type a, type b) {if(a < b) return 1; if(a % b) return 1 + a / b; return a / b;}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k, ev = 0;
    cin >> n >> k;
    vector<int> ar(n);
    int ans = INT_MAX;
    for (int i = 0; i < n; ++i) {
      cin >> ar[i];
      if (ar[i] % 2 == 0) ++ev;
    }
    for (int i = 0; i < n; ++i) {
      ans = min(ans, Round(ar[i], k) * k - ar[i]);
    }
    if (k == 4) {
      if (ev >= 2) ans = 0;
      else if (ev == 1) ans = min(ans, 1);
      else ans = min(ans, 2);
    }
    cout << ans << '\n';
  } 
}
