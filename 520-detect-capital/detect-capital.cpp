class Solution {
public:
    bool detectCapitalUse(string word) {
      int n = word.size();
        if (n == 1) return true; 
        
        bool firstUpper = isupper(word[0]);
        bool secondUpper = isupper(word[1]);
        
        if (firstUpper && secondUpper) {
            for (int i = 2; i < n; i++) {
                if (!isupper(word[i])) return false;
            }
        } else {
            for (int i = 1; i < n; i++) {
                if (!islower(word[i])) return false;
            }
        }
        return true;
    }
};  