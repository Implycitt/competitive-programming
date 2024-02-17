#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n, sz = 26;
    cin >> n;
    string mins = "zzz", cur;
    for (int i = 0; i < sz; ++i) {
      for (int j = 0; j < sz; ++j) {
        for (int k = 0; k < sz; k++) {
          if (i + j + k + 3 == n) {
            cur += char(i+'a');
            cur += char(j+'a');
            cur += char(k+'a');
            mins = min(cur, mins);
          }
        }
      }
    }
    cout << mins << '\n';
  }
}