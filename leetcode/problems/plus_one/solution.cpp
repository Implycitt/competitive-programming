class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int addOne {1};
        int index = digits.size()-1;
        while (addOne) {
            if (index >= 0) {
                std::cout << index;
                if (digits[index] == 9) {
                    digits[index] = 0;
                    index--;
                } else {
                    digits[index]++;
                    addOne = 0;
                }
            } else {
                digits.insert(digits.begin(), 1);
                addOne = 0;
            }
        }
        
        return digits;
    }
};