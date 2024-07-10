#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  cin >> s;
  char last = ' ';
  int b = 0;
  int curr = 0;
  for (auto a: s) {
    if (curr > b) {
      b = curr;
    }
    if (a == last) {
      curr++; 
      last = a;
    } else {
      last = a;
      curr = 1;
    }
  }
  if (curr > b) {
     b = curr; 
  }
  cout << b;
}