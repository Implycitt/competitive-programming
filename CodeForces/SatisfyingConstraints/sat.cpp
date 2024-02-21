#include <bits/stdc++.h>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;

    int start = 1; 
    int stop =  1e9;
    int s = 0;
    set<int> no;

    for (int i = 0; i < n; ++i) {
      int a, x;
      cin >> a >> x;

      if (a == 1)
        start = max(start, x);    
      if (a == 2)
        stop = min(stop, x);
      if (a == 3)
        no.insert(x);
    }
    for (int i : no) {
      if (i >= start && i <= stop) {
        s++;
      }
    }
    cout << max(stop-start+1-s, 0) << '\n';
  }
}