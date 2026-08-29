class Solution {
public:
    string lexGreaterPermutation(string s, string target) {
        int count[26] {};

        for (char a : s) count[a-'a']++;
        for (char a : target) count[a-'a']--;

        for (int i = target.size() - 1; i >= 0; --i) {
            int cur = target[i] - 'a';
            bool check = true;
            int next = -1;
            count[cur]++;

            for (int j = 0; j < 26; ++j) {
                if (count[j] < 0) {
                    check = false;
                    break;
                }
            }
            if (!check) continue;
            for (int j = cur + 1; j < 26; ++j) {
                if (count[j] > 0) {
                    next = j;
                    break;
                }
            }

            if (next == -1) continue;
            count[next]--;
            string ans = target.substr(0, i);
            ans += char('a' + next);
            for (int j = 0; j < 26; ++j) {
                ans.append(count[j], char('a' + j));
            }
            return ans;
        }
        return "";
    }
};