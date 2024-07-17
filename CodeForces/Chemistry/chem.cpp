#include <bits/stdc++.h>

using namespace std;

int main(){
  int t;
  cin >> t;
  while(t--){
    int n, k;
    string s;
    cin >> n >> k >> s;
    map<char, int> count;
    for (auto &ch: s) count[ch]++;

    map<char, int>::iterator it = count.begin();
    int odds = 0;
    while (it != count.end()) {
      if (it->second % 2 != 0) odds++;
      ++it;
    }
  
    if (odds > k+1) {
      cout << "NO\n"; 
    } else {
      cout << "YES\n"; 
    }
  }
}
