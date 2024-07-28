#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main(){
	int t;
	cin >> t;
	while(t--){
		ll n, x, k;
		cin >> n >> x >> k;
		if(2 * k >= x * (x+1) && 2 * k <= n * (n+1)-(n-x) * (n-x+1)) { 
			cout << "YES\n";
		}
		else cout << "NO\n";
	}	
}
