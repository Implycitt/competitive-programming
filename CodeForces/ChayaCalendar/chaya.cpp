#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int cur = 0;
    for (int i = 0; i < n; ++i) {
      int x;
      cin >> x;
      cur += x - cur % x;
    } 
    cout << cur << '\n';
  }
}