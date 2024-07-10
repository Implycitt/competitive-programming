#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

ll C(int n, int k) {
  ll result = 1;
  for (int i = 1; i <= k; ++i) {
      result = result * (n + 1 - i) / i;
  }
  return result;
}

int main() {
  int n = 20, k = 20;
  cout << C(n + k, n);
}
