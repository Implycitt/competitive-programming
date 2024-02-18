#include <bits/stdc++.h>

using namespace std;

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int n;
    cin >> n;
    vector<int> ar(n*2);
    int sum = 0;
    for (int i = 0; i < (n*2); ++i) {
      cin >> ar[i];
    }
    sort(ar.begin(), ar.end());
    for (int i = 0; i < n*2; i+=2) {
      sum += min(ar[i], ar[i+1]); 
    }
    cout << sum << '\n';
  }
}