class Solution {
public:
    bool wordPattern(string pattern, string s) {
 unordered_map<char, string> mp;
    unordered_set<string> used;
    istringstream ss(s);
    string word;
    vector<string> words;

    while (ss >> word)
        words.push_back(word);

    if (words.size() != pattern.size()) return false;

    for (int i = 0; i < pattern.size(); ++i) {
        char c = pattern[i];
        string w = words[i];

        if (mp.count(c)) {
            if (mp[c] != w)
                return false;
        } else {
            if (used.count(w))
                return false;
            mp[c] = w;
            used.insert(w);
        }
    }
    return true;  }
};