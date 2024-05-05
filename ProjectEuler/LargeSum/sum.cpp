#include <bits/stdc++.h>

using namespace std;

int main() {
  freopen("digits.txt", "r", stdin);
  vector<vector<int>> digits;
  for (int i = 0; i < 100; ++i) {
    vector<int> g;
    for (int j = 0; j < 50; ++j) {
      char t;
      cin >> t;
      int num = t - '0';
      g.push_back(num);
    }
    reverse(g.begin(), g.end());
    digits.push_back(g);
  }
  
  int previousRemainder = 0;
  vector<int> newSum;
  for (int x = 0; x < 50; ++x) {
    int sum = 0;
    for (int y = 0; y < 100; ++y) {
      sum += digits[y][x];
    }
    sum += previousRemainder;
    previousRemainder = round(sum / 10); 
    newSum.push_back(sum % 10);
  }
  newSum.push_back(previousRemainder);
  reverse(newSum.begin(), newSum.end());
  for (int i = 0; i < 9; ++i) {
    cout << newSum[i];
  }
}
