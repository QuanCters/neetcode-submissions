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
        map<string, vector<string>> temp;
        for (int i = 0; i < strs.size(); i++) {

            string str = strs[i];
            std::sort(str.begin(), str.end());
            temp[str].push_back(strs[i]);
        }
        for (const auto& [key, value] : temp) {
            result.push_back(value); 
        }
        return result;
    }
};
