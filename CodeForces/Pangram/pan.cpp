#include <bits/stdc++.h>

using namespace std;

int main() {
  int n; 
  string s;
  set<char> word;
  cin >> n >> s;
  for (auto &ch: s) word.insert(tolower(ch));
  if (word.size() == 26) {
    cout << "YES";
  } else {
    cout << "NO";
  }
}
