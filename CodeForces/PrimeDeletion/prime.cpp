#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    string n;
    cin >> n;
    if (n.find('1') < n.find('3')) cout << 13;
    else cout << 31;
    cout << '\n';
  }
}
