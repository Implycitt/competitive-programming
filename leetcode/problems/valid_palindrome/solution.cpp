class Solution {
public:
    bool isPalindrome(string s) {
        erase_if(s, [](unsigned char c) {
            return !isalnum(c);
        });
        if (s.size() == 0) return true;
        long i {};
        size_t j {s.size()-1};
        while (i < j) {
            if (tolower(s[i]) != tolower(s[j])) return false;
            i++;
            j--;
        }
        return true;
    }
};