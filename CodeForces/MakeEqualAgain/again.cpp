#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, a;
    vector<int> ar;
    cin >> n;
    for (int i = 0; i < n; ++i) {
      cin >> a;
      ar.push_back(a);
    }
    int i1 = 0;
    int i2 = 0;
    while (i1 < n && ar[i1] == ar[0]) {
      i1++; 
    }
    while (i2 < n && ar[n - i2 - 1] == ar[n - 1]) {
      i2++;
    }
    int res = n;
    if (ar[0] == ar[n - 1]) {
      res -= i1;
      res -= i2;
    } else {
      res -= max(i1, i2);
    }
    cout << (max(0 , res)) << '\n';
  }
}