class Solution {
public:
    map<char, int> createMap(string &s) {
        map<char, int> result;
        for (char &c : s) {
            result[c]++;
        }
        return result;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> result;
        map<vector<int>,vector<string>> temp;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> arr(26,0);
            for (char &x: strs[i]) {
                arr[x - 'a']++;
            }
            temp[arr].push_back(strs[i]);
        }
        for (const auto& [key, value] : temp) {
            result.push_back(value); 
        }
        return result;
    }
};
