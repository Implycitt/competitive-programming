#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, l, sum = 0;
    cin >> a >> b >> l;
    for (int i = 0; i < 100; ++i) {
      for (int x = 0; x <= 100; ++x) {
        for (int y = 0; y <= 100; ++y) {
          if ((int)(i * ((int)pow(a, x)) * ((int) pow(b, y))) == l) {
            sum++;
          }
        }
      }
    }
    cout << sum << '\n';
  }
}
