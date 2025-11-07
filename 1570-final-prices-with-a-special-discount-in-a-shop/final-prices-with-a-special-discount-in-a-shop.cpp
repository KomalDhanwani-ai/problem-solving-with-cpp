class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
        int n = prices.size();
        stack<int>s;
        vector<int> ans(n);  

        for (int i = n-1; i  >=0; --i) {
            while(!s.empty() && prices[i]<s.top())
            s.pop();

            ans[i] = s.empty() ? prices[i] : prices[i] -s.top();
            s.push(prices[i]);
        }
        return ans;
    }
};
