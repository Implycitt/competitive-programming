class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        std::vector<int> returnvector;
        int startingpos= -1;
        int endingpos = -1;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                startingpos = i;
                break;
            }
        }
        for (int i = nums.size()-1; i >= 0; i--) {
            if (nums[i] == target) {
                endingpos = i;
                break;
            }
        }

        returnvector.push_back(startingpos);
        returnvector.push_back(endingpos);
      
        return returnvector;
    }
};