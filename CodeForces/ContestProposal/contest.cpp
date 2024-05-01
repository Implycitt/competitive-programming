#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0, diff = 0;
    cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; ++i) {
      cin >> a[i];
    }
    for(int i = 0; i < n; ++i) {
      cin >> b[i];
    }
    for(int i = 0; i < n; ++i) {
      if (a[i - diff] > b[i]) {
        ++sum;
        ++diff;
      }
    }
    cout << sum << '\n';
  }
}
