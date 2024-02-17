#include <bits/stdc++.h>

using namespace std;

int solve() {
  vector<int> ar;
  int n, sum;
  cin >> n;
  for (int i = 0; i < n; ++i) {
    int a;
    cin >> a;
    sum += a;
    ar.push_back(a);
  }
  int k = floor((sum/n));
  for (int i = 0; i < n-1; ++i) {
    if (ar[i] < k) {
      cout << "NO" << '\n';
      return 0;
    }
    ar[i + 1] += ar[i] - k;
    ar[i] = k;
  }
  cout << "YES" << '\n';
  return 0;
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    solve();
  }
}