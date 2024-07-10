#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

bool isPrime(ll num) {
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) return false; 
  }
  return true;
}

ll primeFactors(ll num) {
  vector<int> primes = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31, 37};
  ll prod = 1;
  for(int i: primes) {
    int count = 0;
    if (num == 1) return prod; 
    while (num % i == 0) {
      count++;
      num /= i;
    }
    prod *= count+1;
  }  
  return prod;
}

int main() {
  for (int i = 1; i <= LONG_MAX; ++i) {
    ll triangleNum = i*(i+1)/2; 
    ll prod = primeFactors(triangleNum);
    if (prod > 500) {
      cout << triangleNum;
      return 0;
    }
  }
}
