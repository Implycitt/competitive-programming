#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

bool isPrime(ll n) {
  for (ll i = 2; i <= ceil(sqrt(n)); ++i) {
    if (n % i == 0) return false;
  }
  return true;
}

int main() {
  int counter = 0;
  for (ll i = 1; i < LONG_MAX; ++i) {
    if (isPrime(i)) {
      counter++;
      if (counter == 10001) {
        cout << i;
        return 0;
      }
    }
  }
}
