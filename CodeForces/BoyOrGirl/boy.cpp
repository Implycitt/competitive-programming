#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  set<char> name;
  for (auto &ch: s) {
    name.insert(ch);
  }
  if (size(name) % 2 == 0) {
    cout << "CHAT WITH HER!";
  } else {
    cout << "IGNORE HIM!";
  }
}
