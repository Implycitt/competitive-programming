#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long 

ll collatz(ll num) {
  ll sequence = 0;
  while (num != 1) {
    if (num % 2 == 0) {
      num /= 2;
    } else {
      num = 3*num + 1;
    }
    sequence++;
  }
  return sequence;
}

int main() {
  int largest = 0;
  int largestSeq = 0;
  for (ll i = 1; i <= 1e6; ++i) {
    int t = collatz(i);
    if (t > largestSeq) { 
      largestSeq = t;
      largest = i;
    }
  }
  cout << largest; 
}
