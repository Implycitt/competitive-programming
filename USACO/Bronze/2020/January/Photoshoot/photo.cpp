#include <bits/stdc++.h>

using namespace std;

int main() {
  (void)!freopen("photo.in", "r", stdin);
  (void)!freopen("photo.out", "w", stdout);

  int n;
  cin >> n;
  vector<int> order(n);

  for (int i = 1; i < n; ++i) {
    int a;
    cin >> a;
    order[i] = a;
  }

  int count = 1;
  int ans[1000];
  ans[0] = count;

  while(true) {
    for (int i = 1; i < n; ++i) {
      ans[i] = order[i] - ans[i - 1];
    }

    bool flag = false;
    for (int i = 0; i < n; ++i) {
      if (ans[i] <= 0 || ans[i] > n) {
        flag = true;
        break;
      }
    }

    if (unique(begin(ans), begin(ans) + n) != begin(ans) + n || flag) {
      fill_n(begin(ans), n, 0);
      count++;
      ans[0] = count;
    } else {
      for (int i = 0; i < n; ++i) {
        if (i != n -1) {
          cout << ans[i] << " ";
        } else {
          cout << ans[i];
        }
      }
      break;
    }
  }
}