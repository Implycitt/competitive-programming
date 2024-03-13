#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, prod = 1;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
      cin >> ar[i];
      prod *= ar[i];
    }
    if (prod <= 0) {
      cout << 0 << '\n';
    } else {
      cout << 1 << '\n' << 1 << " " << 0 << '\n';
    }
  }
}
