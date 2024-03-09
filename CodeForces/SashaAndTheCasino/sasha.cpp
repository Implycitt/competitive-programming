#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int tc;
  cin >> tc;
  while(tc--) {
    ll k, x, a, z = 0;
    bool check = true;
    cin >> k >> x >> a;
    for (int i = 0; i < x; ++i) {
      int zi = z/(k-1)+1;
      z += zi;
      if (z > a) {
        check = false;
        break;
      }
    }
    if (check and (a-z) * k > a) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}
