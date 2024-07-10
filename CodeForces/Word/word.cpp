#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  vector<char> out;
  int upper = 0;
  cin >> s;
  for (auto &ch: s) {
    if (isupper(ch)) upper++;
  }
  bool val = (upper > floor(s.size()/2));
  for (auto &ch: s) {
    if (val) out.push_back(toupper(ch)); 
    if (!val) out.push_back(tolower(ch)); 
  }
  cout << string(out.begin(), out.end()) << '\n';
}
