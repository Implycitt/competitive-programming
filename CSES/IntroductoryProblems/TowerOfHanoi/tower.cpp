#include <bitst/stdc++.h>

using namespace std;

void move(int a, int b, int c, int d) {
  if (d == 1) {
    cout << a << ' ' << c << '\n';
    return;
  }
  move(a, b, c, d-1);
  cout << a << ' ' << c << '\n';
  move(b, a, c, d-1);
}

int main() {
  int n;
  cin >> n;
  cout << (1 << n) - 1 << "\n";
  move(1, 2, 3, n);
}
