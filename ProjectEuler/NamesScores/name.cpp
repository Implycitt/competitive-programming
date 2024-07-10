#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main() {

  vector<string> names;
  fstream fin("names.txt");
  ll sum = 0;
  string name;
  while(getline(fin, name)) {
    names.push_back(name);
  }
  sort(names.begin(), names.end());

  for (int i = 0; i < names.size(); ++i) {
    ll s = 0;
    for (int c : names[i]) {
      s += c - 64;
    }
    sum += s * (i+1);
  }
  cout << sum;
}
