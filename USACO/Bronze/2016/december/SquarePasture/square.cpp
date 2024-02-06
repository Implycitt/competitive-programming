#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  (void)!freopen("square.in", "r", stdin);
  (void)!freopen("square.out", "w", stdout);

  int x1, y1, x2, y2, x3, y3, x4, y4;
  cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4;
  
  int width = max(max(x1, x2), max(x3, x4)) - min(min(x1, x2), min(x3, x4));
  int length = max(max(y1, y2), max(y3, y4)) - min(min(y1, y2), min(y3, y4));
  cout << pow(max(length, width), 2);
}