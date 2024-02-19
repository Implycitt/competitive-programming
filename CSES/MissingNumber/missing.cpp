#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n, sum;
  cin >> n;
  for (int i = 0; i < n-1; ++i) {
    long long t;
    cin >> t;
    sum += t;
  }
  long long h = n*(n+1)/2;
  cout << h - sum+1;
}