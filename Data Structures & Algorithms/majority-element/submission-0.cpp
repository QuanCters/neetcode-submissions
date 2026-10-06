class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count = 0;
        int result = nums[0];
        for (int &x : nums) {
            if (result == x) {
                count++;
            } else {
                if (count == 0) {
                    result = x; 
                    count++;
                } else {
                    count--;
                }
            }
        }
        return result;
    }
};