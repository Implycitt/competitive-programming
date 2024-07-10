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
  
  ll largestProd = 0;
  
  // moving left to right
  for (int i = 0; i < size(grid); ++i) {
    int pointer1 = 0, pointer2 = 3;
    for (pointer1; pointer1 <= size(grid[i])-4; ++pointer1) {
      ll prod = 1;
      for (int j = pointer1; j <= pointer2; ++j) {
        prod *= grid[i][j];
      }
      if (prod > largestProd) {
        largestProd = prod;
      }
      pointer2++;
    }
  }    

  //moving up and down

  
  //moving top left diagonally

  //moving bottom left diagonally

  cout << largestProd << "\n";
}
