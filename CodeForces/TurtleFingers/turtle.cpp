#include <bits/stdc++.h>

using namespace std;

void solve(){
    int a, b, l;
    cin >> a >> b >> l;
    set<int> ans;
    for(int i = 0; i <= 34; ++i){
        int x = l;
        bool fail = false;
        for(int j = 0; j < i; ++j){
            if(x % a){
                fail = true;
                break;
            }
            x /= a;
        }
        if(fail) break;
        while(true){
            ans.insert(x);
            if(x % b) break;
            x /= b;
        }
    }
    cout << ans.size() << '\n';
}
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}
