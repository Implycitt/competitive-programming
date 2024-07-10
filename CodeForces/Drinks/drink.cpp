#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> nums(n);
  for (int i = 0; i < n; ++i) cin >> nums[i];
  cout << accumulate(nums.begin(), nums.end(), 0) / (double) size(nums);
}
