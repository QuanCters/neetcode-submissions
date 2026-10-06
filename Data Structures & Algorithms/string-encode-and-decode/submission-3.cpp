class Solution {
public:

    string encode(vector<string>& strs) {
        string result = "";
        for (string &s : strs) {
            result += s + "`";
        }
        return result;
    }

    vector<string> decode(string s) {
        stringstream ss(s);
        string token;
        vector<string> tokens;
        while (getline(ss, token, '`')) {
            tokens.push_back(token);
        }
        return tokens;
    }
};
