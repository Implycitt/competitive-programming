#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> query;
  int tc;
  cin >> tc;
  while (tc--) {
    int q, n;
    cin >> q >> n;
    if (q == 1) {
      query.push_back(n);
    } else {
      cout << query[query.size() - n] << '\n';
    }
  }
}