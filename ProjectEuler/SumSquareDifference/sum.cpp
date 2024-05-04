#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

int main() {
  ll sumSquares, squareSums, num = 100;
  sumSquares = num * (num + 1) * (2 * num + 1) / 6;
  squareSums = num * (num + 1) / 2;
  squareSums = pow(squareSums, 2);
  cout << squareSums - sumSquares;
}
