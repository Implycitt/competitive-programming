#include <bits/stdc++.h>

using namespace std;

int main() {
  for (int i = 0; i < 500; ++i) {
    for (int j = 1; j < 500; ++j) {
      int c = sqrt((i*i) + (j*j));
      if (i + j + c == 1000 && (c * c == (i*i) + (j*j))) {
        cout << i*j*c;
        return 0;
      } 
    }
  }
}
