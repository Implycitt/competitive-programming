#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int a, b;
    cin >> a >> b;

    if (b < a) {
      swap(a, b);
    }
    if (((a % 2 == 1) && (b % 2 == 1)) || ((a % 2 == 1) && (b == 2 * a))) {
      cout << "No\n";
    } else {
      cout << "Yes\n";
    }
  }
}