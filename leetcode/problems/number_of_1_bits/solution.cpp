class Solution {
public:
    int hammingWeight(int n) {
        bitset<32> bit(n);
        return bit.count();
    }
};