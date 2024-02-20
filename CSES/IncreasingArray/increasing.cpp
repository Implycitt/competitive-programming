#include <bits/stdc++.h>

using namespace std;

int main() {
  long long n;
  cin >> n;
  vector<long long> ar(n);
  long long sum = 0;
  for (long long i = 0; i < n; ++i) {
    cin >> ar[i];
  }
  for (long long i = 0; i < n-1; ++i) {
    if (ar[i] > ar[i+1]) {
      sum += ar[i] - ar[i+1];
      ar[i+1] = ar[i];
    }
  }
  cout << sum;
}