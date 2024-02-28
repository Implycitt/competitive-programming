#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main() {
  int t;
  cin >> t;
  while (t--) {
    ll start;
    cin >> start;
    cout << ((start % 10 == 0) ? "E" : "B") << '\n';
  }
}
