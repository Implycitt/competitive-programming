#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, out = 0;
  string s;
  cin >> n >> s;
  char prev = s[0]; 
  for (int i = 1; i < n; ++i) {
    char curr = s[i];
    if (curr == prev) out++;
    prev = curr;
  }
  cout << out;
}
