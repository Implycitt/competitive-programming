#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    int minn = 1e9 + 7;
    vector<int> min2;
    for (int i = 0; i < n; ++i) {
      int m;
      cin >> m;
      vector<int> v(m);
      for (auto &el : v) cin >> el;
      int minel = *min_element(v.begin(), v.end());
      minn = min(minn, minel);
      v.erase(find(v.begin(), v.end(), minel));
      min2.push_back(*min_element(v.begin(), v.end()));
    }
    cout << minn + (ll) accumulate(min2.begin(), min2.end(), 0ll) - *min_element(min2.begin(), min2.end()) << '\n';
  }
}
