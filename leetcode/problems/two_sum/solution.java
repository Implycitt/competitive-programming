class Solution {
    public int[] twoSum(int[] nums, int target) {
        int[] ret = {0, 0}; 
        for (int i = 0; i < nums.length - 1; i++) {
            for (int k = 1; k < nums.length; k++) {
                if (i == k) {
                    continue;
                }
                if ((nums[i] + nums[k]) == target) {
                    ret[0] = i;
                    ret[1] = k;
                    return ret;
                }   
            }

        }
        return ret;
    }
}