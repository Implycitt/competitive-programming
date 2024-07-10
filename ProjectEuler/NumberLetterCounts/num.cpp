#include <bits/stdc++.h>

using namespace std;

#define ll unsigned long long

map<int, string> words = {
  {1, "one"}, 
  {2, "two"}, 
  {3, "three"}, 
  {4, "four"}, 
  {5, "five"}, 
  {6, "six"}, 
  {7, "seven"}, 
  {8, "eight"}, 
  {9, "nine"}, 
  {10, "ten"}, 
  {11, "eleven"}, 
  {12, "twelve"}, 
  {13, "thirteen"}, 
  {14, "fourteen"}, 
  {15, "fifteen"}, 
  {16, "sixteen"}, 
  {17, "seventeen"}, 
  {18, "eighteen"}, 
  {19, "nineteen"}, 
  {20, "twenty"}, 
  {30, "thirty"}, 
  {40, "forty"}, 
  {50, "fifty"}, 
  {60, "sixty"}, 
  {70, "seventy"}, 
  {80, "eighty"}, 
  {90, "ninety"}, 
  {100, "onehundred"}, 
  {200, "twohundred"}, 
  {300, "threehundred"}, 
  {400, "fourhundred"}, 
  {500, "fivehundred"}, 
  {600, "sixhundred"}, 
  {700, "sevenhundred"}, 
  {800, "eighthundred"}, 
  {900, "ninehundred"}, 
  {1000, "onethousand"}, 
};

vector<int> getVec(int i) {
  vector<int> numbers;
  int rem = 0;
  while (i != 0) {
    rem = i % 10;
    i /= 10;
    numbers.push_back(rem);
  }
  return numbers;
}

int count(int i) {
  vector<int> numbers = getVec(i);
  int out = 0;
  for (int j = 0; j < numbers.size(); ++j) {
    int num = numbers[j] * (pow(10, j));
    if (num % 100 == 0 && (numbers[0] != 0 || numbers[1] != 0)) out += 3;
    out += words[num].length(); 
    cout << num << ' ' << words[num] << ' ' << words[num].length() << ' ' << out << '\n';
  }
  return out;
}

int main() {
  ll len = 0;
  for (int i = 1; i <= 1000; ++i) {
    len += count(i);
  }
  cout << len;
}
