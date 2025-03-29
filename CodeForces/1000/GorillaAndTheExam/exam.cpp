#include <bits/stdc++.h>

using namespace std;

#define ll as long long;

void solve() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  vector<int> count = {1};
  for (int i = 0; i < n; ++i) cin >> a[i];
  sort(a.begin(), a.end()); 
  for (int i = 1; i < n; ++i) {
    if (a[i] == a[i-1]) {
      count.back()++;
    } else {
      count.push_back(1);
    }
  }
  sort(count.begin(), count.end());
  int m = size(count);
  for (int i = 0; i < m; ++i) {
    if (count[i] > k) {
      cout << m - i << '\n';
      return;
    } 
    k -= count[i];
  }
  cout << 1 << '\n';
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
