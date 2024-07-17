#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    string ss1 = s.substr(0, 3), ss2 = s.substr(3, 3);
    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < 3; ++i) {
      sum1 += (ss1[i] - '0');
      sum2 += (ss2[i] - '0');
    }
    if (sum1 == sum2) {
      cout << "YES" << '\n';
    } else {
      cout << "NO" << '\n';
    }
  }
}
