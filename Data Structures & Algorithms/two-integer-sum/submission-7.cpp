class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> hash;
        for (int i = 0; i < nums.size(); i++) {
            int current = nums[i];
            int secondary = target - current;
            if (hash.find(secondary) != hash.end()) {
                return {hash[secondary], i};
            }
            hash[current] = i;
        }
        return {};
    }
};