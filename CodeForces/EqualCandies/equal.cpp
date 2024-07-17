#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> candies(n);
    for (int i = 0; i < n; ++i) cin >> candies[i];
    sort(candies.begin(), candies.end());
    cout << (accumulate(candies.begin(), candies.end(), 0) - (candies[0] * n)) << '\n';
  }
}
