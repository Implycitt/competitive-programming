class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        while (stones.size() != 1) {
            std::sort(stones.begin(), stones.end());
            int result = stones.back();
            stones.pop_back();
            result -= stones.back();
            stones.pop_back();
            
            if (result != 0) stones.push_back(result);
            if (result == 0 && stones.size() == 0) return 0;
        }
        return stones.back();
    }
};