#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    vector<int> x(4);
    vector<int> y(4);
    for (int i = 0; i < 4; i++) {
      cin >> x[i];
      cin >> y[i];
    }
    sort(x.begin(), x.end());
    int o = (abs(x[3] - x[0]));
    cout << (o*o) << '\n';
  }
}