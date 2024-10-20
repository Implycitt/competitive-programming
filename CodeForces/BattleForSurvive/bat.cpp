#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n; 
    ll ans = 0;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; ++i) {
      cin >> a[i];
      ans += a[i];
    } 
    cout << ans - 2*a[n-2] << '\n';
  }
}
