class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        set<int>s;

        for(auto x:nums){
            s.insert(x);
        }
        int i=1;
        while(i<=nums.size()){
            if(s.find(i)==s.end()){

                ans.push_back(i);
            }
            i++;
        }
        return ans;
    }
};
