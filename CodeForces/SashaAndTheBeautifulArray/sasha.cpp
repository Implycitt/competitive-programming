#include <bits/stdc++.h>

using namespace std;

int main() {
    int t; 
    cin >> t;
    while (t--) {
        int n;
        vector<int> in;
        cin >> n;
        for (int i = 0; i < n; ++i) {
            int a;
            cin >> a;
            in.push_back(a);
        }

        sort(in.begin(), in.end());
        int smallest = in[0];
        int largest = in[n-1];

        cout << (abs(largest-smallest)) << '\n';
    }   
}