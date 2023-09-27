class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int sum;
        std::vector<int> returning;
        for (int i = 0; i < nums.size(); i++) {
            for (int k  = 1; k < nums.size(); k++) {
                if (k == i) {
                    continue;
                }
                sum = nums[i] + nums[k];
                if (sum == target) {
                    returning.push_back(i);
                    returning.push_back(k);
                    return returning;
                }
            }
        }
        return returning;
    }
};