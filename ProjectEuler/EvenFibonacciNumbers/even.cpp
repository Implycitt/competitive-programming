#include <bits/stdc++.h>

using namespace std;

int main() {
  int tail = 1;
  int head = 1;
  int sum = 0;
  while (head <= 4000000) {
    if (head % 2 == 0) {
      sum += head;
    }
    int temp = head;
    head += tail;
    tail = temp;
  }
  cout << sum << '\n';
}