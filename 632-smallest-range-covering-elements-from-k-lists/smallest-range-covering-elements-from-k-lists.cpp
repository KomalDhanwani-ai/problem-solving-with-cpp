class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {
      vector<pair<int, int>> all; 
        int k = nums.size();

        // Flatten the list
        for (int i = 0; i < k; i++) {
            for (int x : nums[i]) {
                all.push_back({x, i});
            }
        }

        sort(all.begin(), all.end());

        vector<int> freq(k, 0);
        int count = 0;
        int left = 0, n = all.size();
        vector<int> ans = {all[0].first, all.back().first};

        for (int right = 0; right < n; right++) {
            if (++freq[all[right].second] == 1) count++;

            while (count == k) {
                if (all[right].first - all[left].first < ans[1] - ans[0]) {
                    ans = {all[left].first, all[right].first};
                }
                if (--freq[all[left].second] == 0) count--;
                left++;
            }
        }
        return ans;
    }
};