class Solution {
public:
    string sortSentence(string s) {
     stringstream ss(s);
    string w;
    vector<string> ans(10);
    int cnt = 0;

    while (ss >> w) {
        int pos = w.back() - '0';
        w.pop_back();
        ans[pos] = w;
        cnt++;
    }

    string res = ans[1];
    for (int i = 2; i <= cnt; i++)
        res += " " + ans[i];
    return res;
}
};