#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

bool isPal(ll num) {
  ll temp = num;
  ll reversed = 0, remainder;

  while (num != 0) {
    remainder = num % 10;
    reversed = reversed * 10 + remainder;
    num /= 10;
  }
  if (temp == reversed) return true;
  return false;
}

int main() {
  ll max = 0;
  for (int i = 100; i < 1000; ++i) {
    for (int j = 100; j < 1000; ++j) {
      ll num = i*j;
      if (isPal(num) && num > max) max = num; 
    }
  }
  cout << max;
  return 0;
}
