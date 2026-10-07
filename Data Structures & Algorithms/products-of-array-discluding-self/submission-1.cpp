class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int size = nums.size();
        vector<int> prefix(size + 1, 1);
        vector<int> postfix(size + 1, 1);

        for (int i = 0; i < size; i++) {
            prefix[i+1] = nums[i] * prefix[i];
            postfix[size - i -1] = nums[size - i - 1] * postfix[size - i]; 
        }

        vector<int> result(size, 1);
        for (int i = 0; i < size; i++) {
            result[i] = prefix[i] * postfix[i+1];
        }

        return result;
    }
};
