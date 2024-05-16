#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main() {

  vector<string> names;
  fstream fin("names.txt");
  ll sum = 1;
  string name;
  while(getline(fin, name)) {
    names.push_back(name);
  }
  sort(names.begin(), names.end());

  for (int i = 1; i <= names.size()+1; ++i) {
    ll s = 0;
    for (int c : names[i-1]) {
      s += c - 64;
    }
    sum += s * i;
  }
  cout << sum-1;
}
