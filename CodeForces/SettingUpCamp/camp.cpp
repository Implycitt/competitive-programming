#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll t;
  cin >> t;
  while (t--) {
    ll a, b, c;
    cin >> a >> b >> c;
    ll rem = (3 - b % 3) % 3;
    if (b > 0 && c < rem) {
      cout << "-1\n";
    } else {
      c -= rem;
      b += rem;
      cout << a + c / 3 + (c % 3 + 1) / 2 + b / 3 << '\n';
    }
  }
}
