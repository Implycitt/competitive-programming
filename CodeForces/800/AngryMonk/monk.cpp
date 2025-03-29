#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    vector<int> pieces(k);
    for (int i = 0; i < k; ++i) cin >> pieces[i]; 
    sort(pieces.begin(), pieces.end());
    pieces.pop_back();
    cout << accumulate(pieces.begin(), pieces.end(), 0)*2-size(pieces) << '\n';
  }
}
