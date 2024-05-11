#include <bits/stdc++.h>

using namespace std;

int main() {
  int p = 1000, sum = 0;
  string num = to_string(pow(2, p));
  num = num.substr(0, num.size()-7);
  for (char i : num) {
    sum += i - '0';
  }
  cout << sum;
}
