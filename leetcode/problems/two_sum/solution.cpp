class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int i{};
        int j{};
        while (i != nums.size()-1) {
            if (i == j) ++j;
            if (j == nums.size()) {
                j = 0; 
                ++i;
            }
            if (nums[i] + nums[j] == target) return {i, j};
            ++j;
        }
        return {};
    }
};