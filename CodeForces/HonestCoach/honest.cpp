#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    vector<int> ar(n);

    for (int &x : ar) {
      cin >> x;
    } 
    
    sort(ar.begin(), ar.end());

    int m = ar[n-1] - ar[0];

    for(int i = 0; i < n; ++i) {
      for (int j = i + 1; j < n; ++j) {
        m = min(m, ar[j] - ar[i]);
      }
    }

    cout << m << '\n';
  }
}