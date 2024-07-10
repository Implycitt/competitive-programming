#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int d(int n) {
  int sum = 0;
  for (int i = 1; i < n; ++i) {
    if (n % i == 0) {
      sum += i;
    }
  }
  return sum;
}

int amicable(int a) {
  int b = d(a);
  if (a == d(b) && a != b) return a;
  return 0;
}

int main() {
  ll sum = 0;
  for (int i = 1; i < 10000; ++i) {
    sum += amicable(i);
  }
  cout << sum;
}
