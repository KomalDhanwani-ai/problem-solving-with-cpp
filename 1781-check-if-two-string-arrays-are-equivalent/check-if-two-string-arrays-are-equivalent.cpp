class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
    string s1 = "", s2 = "";

        // Concatenate word1 array
        for (int i = 0; i < word1.size(); i++) {
            s1 += word1[i];
        }

        // Concatenate word2 array
        for (int i = 0; i < word2.size(); i++) {
            s2 += word2[i];
        }

        // Compare both full strings
        return s1 == s2;
    }
};