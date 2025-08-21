class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
     vector<int> result;
        vector<int> count(26,0);
        for (char c : p) count[c-'a']++;
        
        int left = 0, right = 0, needed = p.size();
        while (right < s.size()) {
            if (count[s[right++]-'a']-- > 0) needed--;
            if (needed == 0) result.push_back(left);
            if (right - left == p.size() && count[s[left++]-'a']++ >= 0) needed++;
        }
        return result;
    }
};