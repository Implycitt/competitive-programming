class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result {};

        for (int a: nums) {
            result = result ^ a;
        }

        return result;
    }
};