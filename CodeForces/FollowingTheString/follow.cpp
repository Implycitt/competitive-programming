#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
      cin >> ar[i];
    }
    vector<int> cnt(26, 0);
    char s = ' ';
    for (int i = 0; i < n; ++i) {
      for (int j = 0; j < 26; ++j) {
        if (cnt[j] == ar[i]) {
          cnt[j] += 1;
          s += (97 + j);
          break;
        }
      }
    }
    cout << s << '\n';
  }
}