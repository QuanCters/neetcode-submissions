class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        std::unordered_map<int, int> myMap;
        for(int &x : nums) {
            myMap[x]++;
        }

        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        for (auto &x : myMap) {
            int first = x.first;
            int second = x.second;
            bucket[second].push_back(first);
        }

        vector<int> result;

        for (int i = n; i >= 0; i--) {
            if (!bucket[i].empty()) {
                for (int &x : bucket[i]) {
                    result.push_back(x);

                    if (result.size() == k) {
                        return result;
                    }
                }
            }
        }

        return result;
    }
};
