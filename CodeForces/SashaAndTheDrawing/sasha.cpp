#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, k;
    cin >> n >> k;
    if (k <= (2*n - 2)*2) {
      cout << ((k+1)/2) << '\n';
    } else {
      cout << (k/2 + 1) << '\n';
    }
  }
}