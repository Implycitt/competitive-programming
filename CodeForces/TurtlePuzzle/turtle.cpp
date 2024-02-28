#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0;
    cin >> n;
    while (n--) {
      int a;
      cin >> a;
      sum += abs(a);
    }
    cout << sum << '\n';
  }
}
