class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
    unordered_set<string> bannedSet(banned.begin(), banned.end());
    unordered_map<string, int> count;

    for (char &c : paragraph) {
        if (isalpha(c)) c = tolower(c);
        else c = ' ';
    }

    stringstream ss(paragraph);
    string word;
    while (ss >> word) {
        if (!bannedSet.count(word)) count[word]++;
    }

    string ans;
    int maxCount = 0;
    for (auto &p : count) {
        if (p.second > maxCount) {
            maxCount = p.second;
            ans = p.first;
        }
    }
    return ans;
}
};