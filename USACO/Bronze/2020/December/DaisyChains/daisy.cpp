#include <bits/stdc++.h>

using namespace std;

int main () { 
  int tc;
  int validPhotos = 0;
  cin >> tc;

  vector<int> flowers(tc);
  for (int &f : flowers) {
    cin >> f;
  }
  
  for (int i = 0; i < tc; ++i) {
    for (int j = i; j < tc; ++j) {
      double avgPetals = 0;
      for (int f = i; f <= j; ++f) {
        avgPetals += flowers[f];
      }
      avgPetals /= j - i + 1;
      for (int k = i; k <= j; ++k) {
        if (flowers[k] == avgPetals) {
          validPhotos++;
          break;
        }
      }
    }
  }
  cout << validPhotos << endl;
}