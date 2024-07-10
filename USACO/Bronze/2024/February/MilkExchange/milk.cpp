#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, m;
  cin >> n >> m; 

  vector<char> directions(n);
  vector<int> cows(n);
  
  for (int i = 0; i < n; ++i) { //get directions and carry amount
    cin >> directions[i];
  }
  for (int i = 0; i < n; ++i) {
    cin >> cows[i];
  }
  vector<int> initial = cows;

  while (m--) {
    for (int i = 0; i < n; ++i) {
      int g;
      char dir = directions[i];
      if (dir == 'L') {
        g = i - 1;
        if (g < 0) {
          g = n-1;
        }
      } else {
        g = i + 1;
        if (g > n-1) {
          g = 0;
        }
      }
      cows[g] += cows[i];
      if (cows[g] > initial[g]) {
        cows[g] -= cows[i];
      } 
      if (directions[i+1] == dir) {
        cows[i] -= cows[i];
      }
    }

    int sum = 0; // output the sum
    for (int i = 0; i < cows.size(); ++i) {
      sum += cows[i];
    }
    cout << sum;
  }
}