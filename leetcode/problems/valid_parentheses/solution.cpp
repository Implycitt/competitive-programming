class Solution {
public:
    bool isValid(string s) {
        std::map<char, char> paren = {{')', '('}, {'}', '{'}, {']', '['}};
        std::stack<char> rev {};
        for (char &ch: s) {
            if (paren.contains(ch)) {
                if (rev.size() != 0 && rev.top() == paren[ch]) {
                    rev.pop();
                } else {
                    return false;
                }
            } else {
                rev.emplace(ch); 
            }
        }
        return (rev.size() == 0);
    }
};