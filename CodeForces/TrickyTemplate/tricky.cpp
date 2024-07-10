#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    vector<bool> cases;
    string a, b, c;
    cin >> n >> a >> b >> c;

    for (int i = 0; i < n; ++i) {
     cases.push_back((a[i] != c[i] && b[i] != c[i]));
    }

    for (int i = 0; i < cases.size(); ++i) {
      if (cases[i] == false) {
        cout << "NO" << '\n';
        break; 
      } 
    }
    cout << "YES" << '\n';
  }
}