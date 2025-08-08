class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& words) {
    int ans = 0, n = words.size();
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (words[j].starts_with(words[i]) &&
                    words[j].ends_with(words[i])) {
                    ans++;
                }
            }
        }
        return ans;
    }
};