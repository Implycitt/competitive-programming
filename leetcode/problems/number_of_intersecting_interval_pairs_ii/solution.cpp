class Solution {
public:
    long long countIntersectingIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        int pointer {};
        long long counter {};
        for (size_t i {}; i < intervals.size(); ++i) {
            auto iterator = upper_bound(intervals.begin() + i + 1, intervals.end(), intervals[i][1],
                [](int target, const vector<int>& interval) {
                    return target < interval[0];                           
                });
            counter += distance(intervals.begin() + i + 1, iterator);
        }
        return counter;
    }
};