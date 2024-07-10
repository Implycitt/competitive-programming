#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--){ 
    int n, sum = 0;
    cin >> n;
    vector<int> ar(n);
    for (int i = 0; i < n; ++i) {
      cin >> ar[i];
      sum += ar[i];
    }
    if ((sum % 3) == 0) {
      cout << 0;
    } else if (sum % 3 == 2) {
      cout << 1;
    } else {
      bool y = false;
      for (int i = 0; i < n; ++i) {
        if ((sum - ar[i]) % 3 == 0) {
          y = true;
        }
      }
      if (y == true) {
        cout << 1;
      } else {
        cout << 2;
      }
    } 
    cout << '\n';
  }
}
