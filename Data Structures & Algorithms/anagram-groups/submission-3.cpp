class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> temp;
        for (const string &s : strs) {
            int count[26] = {0};
            for (char c : s) {
                count[c - 'a']++;
            }
            string key = "";
            for (int i = 0; i < 26; i++) {
                key += to_string(count[i]) + "#";
            }
            temp[key].push_back(s);
        }
        vector<vector<string>> result;
        result.reserve(temp.size());
        for (const auto& [key, value] : temp) {
            result.push_back(move(value)); 
        }
        return result;
    }
};
