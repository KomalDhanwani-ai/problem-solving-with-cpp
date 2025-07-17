class Solution {
public:
    int longestPalindrome(string s) {
       int freq[128] = {0};
    
    for(char c : s) {
        freq[c]++;
    }
    
    int length = 0;
    for(int i = 0; i < 128; i++) {
        length += (freq[i] / 2) * 2; 
    }
    
    if(length < s.size()) length += 1;
    
    return length; 
    }
};