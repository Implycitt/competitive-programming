class Solution {
public:
    int reverseBits(int n) {
        string bin = bitset<32>(n).to_string();
        reverse(bin.begin(), bin.end());
        return bitset<32>(bin).to_ulong();
    }
};