#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m, k;
    cin >> n >> m >> k;
    int mn = min(n, m);
    mn = min(mn, k);
    if (n%mn != 0 || m%mn != 0 || k%mn != 0) {
      cout << "NO\n";
      continue;
    }
    int out = (n/mn)-1 + (m/mn)-1 + (k/mn)-1;
    if (out <= 3) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
} 
