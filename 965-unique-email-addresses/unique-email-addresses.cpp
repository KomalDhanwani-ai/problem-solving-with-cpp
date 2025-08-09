class Solution {
public:
    int numUniqueEmails(vector<string>& emails) {
       unordered_set<string> seen;
    for (auto &e : emails) {
        size_t at = e.find('@');
        string local = e.substr(0, at);
        string domain = e.substr(at); // includes '@'
        size_t plus = local.find('+');
        if (plus != string::npos) local = local.substr(0, plus);
        local.erase(remove(local.begin(), local.end(), '.'), local.end());
        seen.insert(local + domain);
    }
    return seen.size();
}
};