class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int, int> m;
        for (int i = 0; i < nums.size(); i++){
            if (m.count(nums[i]) && nums[i]*2 == target) {
                return {m[nums[i]], i};
            } else 
            if (m.count(target-nums[i])) {
                return {m[target-nums[i]], i};
            } else {
                m.insert({nums[i], i});
            }
        }
        return {};
    }
};
