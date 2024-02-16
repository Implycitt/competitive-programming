#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    long k, x, a;
    cin >> k >> x >> a;
    long t = 0;
    bool check = true;
    for (long i = 0; i < x; i++) {
      long ti = (floor(t/(k-1))) + 1;
      t += ti;
      if (t > a) {
        check = false;
        break;
      }
    }
    if (check && (a-t)*k > a) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}