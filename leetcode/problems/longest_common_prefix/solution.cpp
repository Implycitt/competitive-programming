class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0].substr(0,1);
        for (int i = 1; i < strs[0].length()+1; i++) {
            prefix = strs[0].substr(0, i);
            for (int k = 0; k < strs.size(); k++) {
                if ((strs[k].substr(0,i) != prefix && i == 1) || strs[k].substr(0,i) == "") {
                    return "";
                } else if (strs[k].substr(0, i) != prefix) {
                    return strs[0].substr(0,i-1);
                }
            }
        }
        return prefix;
    }
};