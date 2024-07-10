#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    string strip;
    cin >> n >> strip;
    pair<int, int> startstop;
    for (int i = 0; i < n; ++i) {
      if (strip[i] == 'B') {
        startstop.first = i;
        break;
      }
    }
    for (int i = n; i > 0; --i) {
      if (strip[i] == 'B') {
        startstop.second = i;
        break;
      }
    }
    cout << abs(startstop.second - startstop.first)+1 << '\n';
  }
}