#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n;
  cin >> n;
  vector<int> ar(n);
  for (int i = 0; i < n; ++i) cin >> ar[i];
  int cur = ar[0];
  int part = 1;
  for (int i = 0; i < n; ++i) {
    cur &= ar[i];
    if (cur == 0) {
      if (i == n-1) break;
      part++;
      cur = ar[i+1];
    }
  }
  if (cur != 0) part--;
  part = max(part, 1);
  cout << part << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
