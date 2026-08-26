class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        string ans = "";
        int n = s.size();

        for (int i = 0; i < n; ++i) {
            int oneCount = 0;
            string cur = "";

            for (int j = i; j < n; ++j) {
                cur += s[j];
                if (s[j] == '1') oneCount++;
                if (oneCount > k) break;

                if (oneCount == k) {
                    if (ans == "" || cur.size() < ans.size() || (cur.size() == ans.size() && cur < ans)) {
                        ans = cur;
                    }
                }
            }
        }
        return ans;
    }
};