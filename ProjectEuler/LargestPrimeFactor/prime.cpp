#include <bits/stdc++.h>

#define ll unsigned long long

using namespace std;

bool isPrime(ll i) {
  for (ll j = 3; j < i; ++j) {
    if (i % j == 0) return false;
  }
  return true;
}

int main() {
  ll n;
  ll max = 1;
  cin >> n;
  for (ll i = 3; i < round(sqrt(n)); ++i) {
    if (n % i == 0 && isPrime(i) && i > max) max = i;
  }
  cout << max << '\n';
}
