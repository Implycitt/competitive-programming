class Solution {
public:
    int climbStairs(int n) {
        int head {1};
        int tail {};
        for (auto i {0uz}; i < n; ++i) {
            int tmp = head;
            head += tail;
            tail = tmp;
        }
        return head;
    }
};