#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int a;
    cin >> a;
    vector<int> nums(a);
    for (int i = 0; i < a; ++i) cin >> nums[i]; 
    vector<int> sorted = nums;
    sort(sorted.begin(), sorted.end());
    if (nums == sorted) {
      cout << 0 << '\n';
      continue;
    }

    ll pmax = 0, sum = 0, m = 0;
    for (int i = 0; i < a; ++i) {
      pmax = max(pmax, (ll) nums[i]);
      ll diff = pmax - nums[i];
      sum += diff;
      m = max(m, diff);
    }

    cout << sum + m << '\n';
  }
}
