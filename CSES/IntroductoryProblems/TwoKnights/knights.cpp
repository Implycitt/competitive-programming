#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
  ll n;
  cin >> n;
  for (ll i = 1; i <= n; ++i) {
    ll kpos = (i*i)*(i*i-1)/2;    
    ll apos = 4*(i-2)*(i-1);
    cout << kpos - apos << '\n';
  }
}