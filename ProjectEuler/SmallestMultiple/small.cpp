#include <bits/stdc++.h>

using namespace std;

int isDivisible(int num) {
  for (int i = 1; i < 20; ++i) {
    if (num % i >= 1) return false;
  }
  return true;
}

int main() {
  for (int i = 1; i < INT_MAX; ++i) {
    if (isDivisible(i)) {
      cout << i;
      return 0;
    }
  }
}
