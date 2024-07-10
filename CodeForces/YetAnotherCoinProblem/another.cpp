#include <bits/stdc++.h>

using namespace std;

int solve(int n) {
  int ans = 0;
  ans += n/15;
  n %= 15;
  ans += n/6;
  n %= 6;
  ans += n/3;
  n %= 3;
  ans += n;
  return ans;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    if (n < 10) {
      cout << solve(n) << '\n';
    } else if (n < 20) {
      cout << min(solve(n), solve(n-10)+1) << '\n';
    } else {
      cout << min({solve(n), solve(n-10)+1, solve(n-20)+2}) << '\n';
    }
  }
}
