#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main() {
  set<ll> prods;
  vector<int> grid;
  char ch;
  fstream fin("grid.txt", ios_base::in);
  while (fin >> noskipws >> ch) {
    grid.push_back(ch - '0');
  }

  int p1 = 0, p2 = 12;
  while (p2 < size(grid)) {
    ll prod = 1;
    for (int i = p1; i <= p2; ++i) {
      prod *= grid[i];
    }
    prods.insert(prod);
    p1++; p2++;
  }
  cout << *prods.rbegin();
}
