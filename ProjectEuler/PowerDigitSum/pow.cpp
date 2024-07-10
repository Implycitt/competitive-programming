#include <bits/stdc++.h>

using namespace std;

int main() {
  int p = 1000, sum = 0;
  string num = to_string(pow(2, p));
  for (char i : num.substr(0, num.size()-7)) {
    sum += i - '0';
  }
  cout << sum;
}
