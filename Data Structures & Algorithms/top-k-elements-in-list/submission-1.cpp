class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        map<int, vector<int>> myMap;
        for (auto& pair : counts) {
            myMap[pair.second].push_back(pair.first);
        }

        vector<int> result;
        for (auto it = myMap.rbegin(); it != myMap.rend() && k > 0; ++it) {
            for (int x : it->second) {
                result.push_back(x);
                k--;
                if (k == 0) break;
            }
        }

       return result;
    }
};
