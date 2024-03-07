#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  ll n, ans = 0, current = 5;
  cin >> n;
  while (current <= n) {
    ans += n / current;
    current *= 5;
  }
  cout << ans << '\n';
}
