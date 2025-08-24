class Solution {
public:
    int findPeakElement(vector<int>& nums) {
     int n = nums.size();
    for (int i = 0; i < n; i++) {
        bool leftOK = (i == 0) || (nums[i] > nums[i-1]);
        bool rightOK = (i == n-1) || (nums[i] > nums[i+1]);
        if (leftOK && rightOK) return i;
    }
    return -1; // Should never happen
}
};