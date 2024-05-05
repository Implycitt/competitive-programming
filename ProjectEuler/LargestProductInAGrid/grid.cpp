#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main() {
  vector<vector<int>> grid;
  freopen("grid.txt", "r", stdin);
  for (int i = 0; i < 20; ++i) {
    vector<int> g;
    for (int j = 0; j < 20; ++j) {
      int t; 
      cin >> t;
      g.push_back(t);
    }
    grid.push_back(g);
  }
  
  
  int pointer1 = 0;
  ll largestProd = 0;
  /*
  for (int x = 0; x < 20; ++x) {
    ll prod = 1;
    int pointer2 = pointer1+3; 
    for (int y = pointer1; y <= pointer2; ++y) {
      prod *= grid[x][y]; 
    }
    if (prod > largestProd) largestProd = prod;
    pointer1++;
  }
  */

  int pointer2 = 3;
  for (int x = 0; x <= 20; ++x) {
    ll prod = 1;
    for (int y = pointer1; y <= pointer2; ++y) {
      prod *= grid[y][x]; 
      cout << prod << '\n';
    }
    if (prod > largestProd) largestProd = prod;
    pointer2++;
  }
  cout << largestProd;
}
