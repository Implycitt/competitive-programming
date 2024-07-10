#include <bits/stdc++.h>

int main() {
  int tc;
  std::cin >> tc;
  while (tc--) {
    int n, k;
    std::cin >> n >> k;
    for (int i = 0; i < n; i++) {
      for (char c = 'a'; c < 'a'+k; c++) {
        std::cout << c;
      }
    }
    std::cout << '\n';
  }
} 
