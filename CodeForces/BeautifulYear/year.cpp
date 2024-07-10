#include <bits/stdc++.h>

using namespace std;

bool isUnique(int n) {
  set<int> snums;
  vector<int> vnums;
  while (n != 0) {
    int digit = n % 10;
    vnums.push_back(digit);
    snums.insert(digit);
    n /= 10;
  }
  if (size(vnums) > size(snums)) return false;
  return true;
}

int main() {
  int y;
  cin >> y;
  for (int i = y+1; i < 10000; ++i) {
    if (isUnique(i)) {
      cout << i;
      return 0;
    }
  }
}
