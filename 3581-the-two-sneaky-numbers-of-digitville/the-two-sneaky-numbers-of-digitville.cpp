class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>ans;
        map<int,int>m;
        for(auto x:nums){
            m[x]++;
        }
        for(auto x:m){
            if(x.second==2){
                ans.push_back(x.first);
            }
        }
        return ans;
    }
};