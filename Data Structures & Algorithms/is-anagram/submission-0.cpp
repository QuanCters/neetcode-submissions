class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char,int> u;
        map<char,int> v;
        for (char &x : s){
            u[x]++;
        }        
        for (char &y : t) {
            v[y]++; 
        } 
        return u == v ? true : false;
    }
};
