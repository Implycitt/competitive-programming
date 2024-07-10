#include <bits/stdc++.h>

using namespace std;

int dx[4] = {-1, 1, -1, 1};
int dy[4] = {-1, -1, 1, 1};

int main() {
  int tc;
  cin >> tc;

  for (int q = 0; q < tc; ++q) {
    int a, b, x1, y1, x2, y2;
    set<pair<int, int>> st1, st2;
    cin >> a >> b >> x1 >> y1 >> x2 >> y2;

    for (int j = 0; j < 4; ++j) {
      st1.insert({x1 + dx[j] * a, y1 + dy[j] * b});
      st2.insert({x2 + dx[j] * a, y2 + dy[j] * b});
      st1.insert({x1 + dx[j] * b, y1 + dy[j] * a});
      st2.insert({x2 + dx[j] * b, y2 + dy[j] * a});
    }
    int ans = 0;
    
    for (auto a : st1) {
      if (st2.find(a) != st2.end()) {
        ans++;
      }
    }
    cout << ans << '\n';
  }
}