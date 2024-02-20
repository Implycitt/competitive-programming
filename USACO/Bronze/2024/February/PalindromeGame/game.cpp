#include <bits/stdc++.h>

using namespace std;

bool ispal(int a) {
  int n, digit, rev = 0;
  n = a;

  do {
    digit = a % 10;
    rev = (rev*10) + digit;
    a /= 10;
  } while (a != 0);
  return (n == rev);
}

int main() {
  int tc;
  cin >> tc;
  while (tc--) {
    int s;
    cin >> s;
    if (ispal(s) == 1) {
      cout << "B" << '\n';
    }
    int plays = 0;
    while (s > 0) {
      for (int i = 0; i < s; ++i) {
        int rem = s - i;
        if (ispal(rem) == 1) {
          continue;
        } else {
          s -= i;
          plays++;
          break;
        }
      }
    }
    if (plays % 2 == 0) {
      cout << "B" << '\n';
    } else {
      cout << "E" << '\n';
    }
  }
}