class Solution {
public:

    string encode(vector<string>& strs) {
        if (strs.size() == 0) return "";
        string result = "";
        for (string &str: strs) {
            int size = str.length();
            result = result + std::to_string(size) + "#" + str;
        }
        return result;
    }

    vector<string> decode(string s) {
        if (s.length() == 0) return {};
        int i = 0;
        vector<string> result;
        while (i < s.length()) {
            int j = s.find("#", i);
            int size = stoi(s.substr(i, j - i));
            i = j + 1;
            string temp = s.substr(i, size);
            result.push_back(temp);
            i += size;
        }
        return result;
    }
};
