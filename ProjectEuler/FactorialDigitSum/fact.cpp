#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long
#define MAX 500

int mult(int x, int res[], int res_size);

void factorial(int n) {
  int res[MAX];
  res[0] = 1;
  ll sum = 0;
  int res_size = 1;

  for (int x = 2; x <= n; ++x) {
    res_size = mult(x, res, res_size);
  }

  for (int i = res_size - 1; i >= 0; --i) {
    sum += res[i];
  }
  cout << sum;
}

int mult(int x, int res[], int res_size) {
  int carry = 0;

  for (int i = 0; i < res_size; ++i) {
    int prod = res[i] * x + carry;
    res[i] = prod % 10;
    carry = prod / 10;
  }

  while (carry) {
    res[res_size] = carry % 10;
    carry /= 10;
    res_size++;
  }
  return res_size;
}

int main() {
  factorial(100);
}
