#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> ar(n, -1);
    int c = n;
    for (int i = 1; i < n; i += 2) {
      ar[i] = c;
      c--;
    }
    for (int i = 0; i < n; i += 2) {
      ar[i] = c;
      c--;
    }
    for (int i = 0; i < n; ++i) {
      cout << ar[i] << ' ';
    }
    cout << '\n';
  }
}