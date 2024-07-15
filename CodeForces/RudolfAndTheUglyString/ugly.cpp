#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, sum = 0;
    string s;
    cin >> n;
    cin >> s;
    if (n < 3) {
      cout << 0 << '\n';
      continue;
    }
    for (int i = 0; i < n-2; ++i) {
      string sstr = s.substr(i, 3);
      if (s.substr(i, 5) == "mapie") {
        sum++;
        i += 4;
        continue;
      }
      if (sstr == "pie" || sstr == "map") sum++;
    }
    cout << sum << '\n';
  }
}
