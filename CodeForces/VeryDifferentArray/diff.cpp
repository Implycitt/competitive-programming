#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, m;
    cin >> n >> m;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];
    vector<int> b(m);
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(a.begin(), a.end());
    sort(b.rbegin(), b.rend());
    vector<int> c(n);
    long long s = 0;
    for (int i = 0; i < n; i++) {
        c[i] = b[m - n + i];
        s += abs(c[i] - a[i]);
    }
    long long res = 0;
    for (int k = 0; k <= n; k++) {
        res = max(res, s);
        if (k < n) {
            s -= abs(c[k] - a[k]);
            c[k] = b[k];
            s += abs(c[k] - a[k]);
        }
    }
    cout << res << "\n";
  }
}
