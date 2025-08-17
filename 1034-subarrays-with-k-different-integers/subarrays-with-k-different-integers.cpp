class Solution {
public:
    int subarraysWithKDistinct(vector<int>& nums, int k) {
     return atMostK(nums, k) - atMostK(nums, k - 1);
    }

    int atMostK(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int,int> freq;
        int left = 0, ans = 0;

        for(int right = 0; right < n; right++) {
            if(freq[nums[right]] == 0) k--;  // new element
            freq[nums[right]]++;

            while(k < 0) {  // shrink window
                freq[nums[left]]--;
                if(freq[nums[left]] == 0) k++;
                left++;
            }

            ans += (right - left + 1);
        }

        return ans;
    }
};
