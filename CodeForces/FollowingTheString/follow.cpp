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
    unordered_map<char, int> hmap;
    int curr = 97;

    for (int i = 0; i < n; ++i) {
      if (ar[i] == 0) {
        cout << char(curr);
        hmap[curr]++;
        curr++;
      } else {
        for (auto itr: hmap) {
          if (itr.second == ar[i]) {
            cout << char(itr.first);
            hmap[itr.first]++;
            break;
          }
        }
      }
    }
    cout << '\n';
  }
}