#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int original(int num) {
  return (pow(num * (num + 1) / 2, 2)) - (num * (num + 1) * (2 * num + 1) / 6);
}

int condensed(int num) {
  return ((3 * pow(num, 4)) + (2 * pow(num, 3)) - (3 * pow(num, 2)) - 4 * num) / 12; 
}

int main() {
  cout << "difference of the seperate sums: " << original(100) << '\n';
  cout << "Mathematically condensed sum: " << condensed(100) << '\n';
}
