class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int secondary = target - current;
            if (seen.find(secondary) != seen.end()) {
                return {seen[secondary], i};
            }
            seen[current] = i;
        }
        return {};
    }
};