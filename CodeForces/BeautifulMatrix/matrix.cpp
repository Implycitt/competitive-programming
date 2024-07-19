#include <bits/stdc++.h>

using namespace std;

int main() {
  int board[5][5];
  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 5; ++j) {
      cin >> board[i][j];
      if (board[i][j] == 1) {
        cout << abs(2-i)+abs(2-j);
      }
    }
  }
}
