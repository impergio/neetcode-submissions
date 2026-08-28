class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }

        unordered_map<int, int> char_count;

        for (int i = 0; i < s.size(); i++) {
            char_count[s[i]]++;
            char_count[t[i]]--;
        } 

        for (auto c : char_count) {
            if (c.second != 0) {
                return false;
            }
        }

        return true;
    }
};
