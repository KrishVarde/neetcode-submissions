class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> um;

        for (int i = 0; i < nums.size(); i++) {
            int needed = target - nums[i];

            if (um.find(needed) != um.end()) {
                return {um[needed], i};
            }

            um[nums[i]] = i;
        }

        return {};
    }
};
