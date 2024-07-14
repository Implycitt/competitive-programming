#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c;
    cin >> a >> b >> c;
    int times = 5;
    while (times--) {
      if (a <= b && a <= c) {
        a++;
      } else if (b <= a && b <= c) {
        b++;
      } else if (c <= a && c <= b) {
        c++;
      }
    }
    cout << a*b*c << '\n';
  }
}
