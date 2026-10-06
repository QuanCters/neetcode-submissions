class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        bool flag = false;
        int size = nums.size();
        while(true) {
            for (int i = 0; i < size; i++) {
                if (nums[i] == val && i != size - 1 && nums[i+1] != val) {
                    std::swap(nums[i], nums[i+1]);
                    flag = true;
                }
            }
            if (flag == true) {
                flag = false;
            } else {
                break;
            }
        }
        int count = 0;
        for (int i = 0; i < size; i++) {
            if (nums[i] != val) {
                count++;
            }
        }
        return count;
    }
};