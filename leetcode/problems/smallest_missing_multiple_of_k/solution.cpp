class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        for (int i = 1; i < 1000; ++i) {
            if (!ranges::contains(nums, k*i)) return k*i;
        }
        return 0;
    }
};