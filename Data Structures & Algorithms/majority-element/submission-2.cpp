class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if (nums.size() == 1) return nums[0];
        int maxCount = 1;
        int temp = nums[0];
        for (int i = 1; i < nums.size(); i++){
            if (nums[i] != temp) {
                maxCount--;
                if (maxCount == 0) {
                    temp = nums[i];
                    maxCount = 1;
                }
            } else {
                maxCount++;
            }
        }
        return temp;
    }
};