class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int count = 0;
        for(auto x:nums)
        {
            if(x==0){
                count++;
            }
        }

        vector<int>store;
        for(auto x:nums)
        {
            if(x!=0)
            {
                store.push_back(x);
            }
        }
        int i=0;
        for(auto x:store){
            nums[i]=x;
            i++;
        }
        while(i<nums.size()){
            nums[i]=0;
            i++;
        }      
    }
};