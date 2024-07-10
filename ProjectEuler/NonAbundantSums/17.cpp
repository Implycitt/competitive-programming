#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int abundant(int n) {
  int sum = 0;
  for (int i = 1; i < n; ++i) {
    if (n % i == 0) sum += i;
  }
  return sum;
}

int main() {
  vector<int> abunds;
  for (int i = 2; i <= 28123; ++i) {
    if (abundant(i) > i) abunds.push_back(i);
  }

  ll fsum = (28123*(28124)/2);
  ll ssum = 0;
  cout << abunds.size();
}
