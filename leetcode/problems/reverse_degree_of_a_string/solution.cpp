class Solution {
public:
    int reverseDegree(string s) {
        int ans {};
        for (size_t i {1}; i <= s.size(); ++i) {
            ans += (26 - (s[i-1] - 'a')) * i;
        }
        return ans;
    }
};