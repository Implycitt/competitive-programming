#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b;
    cin >> a >> b;
    if (b % a == 0) {
      cout << b * (b/a) << '\n';
    } else {
      cout << b * (a/gcd(a,b)) << '\n';
    }
  }
}