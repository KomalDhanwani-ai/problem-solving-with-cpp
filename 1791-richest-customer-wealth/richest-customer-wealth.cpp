class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxWealth = 0;

        for(int i=0; i <accounts.size();i++)
        {
            int currentWealth = 0;

        for(int j=0;j<accounts[i].size();j++)
        {
            currentWealth = currentWealth + accounts[i][j];
        }
        if(currentWealth > maxWealth)
        {
            maxWealth = currentWealth;
        }
        }
        return maxWealth;
    }
};