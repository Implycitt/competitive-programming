#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

bool isPrime(int num) {
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) return false;
  }
  return true;
}

int main() {
  ll sum = 0;
  for (int i = 2; i < 2e6; ++i) {
    if (isPrime(i)) sum += i;
  }
  cout << sum;
}
