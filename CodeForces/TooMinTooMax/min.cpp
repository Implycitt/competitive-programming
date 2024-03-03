#include <bits/stdc++.h>

using namespace std;

int main () {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) cin >> ar[i];
    int m = 0;
    sort(ar.begin(), ar.end());
    m = abs(ar[n-1] - ar[0]) + abs(ar[0] - ar[n-2]) + abs(ar[n-2] - ar[1]) + abs(ar[1] - ar[n-1]);
    cout << m << '\n';
  }
}
