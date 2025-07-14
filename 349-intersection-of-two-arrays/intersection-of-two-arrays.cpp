class Solution {
public:
bool isPresent(vector<int>& arr, int x) {
        for (int i = 0; i < arr.size(); i++) {
            if (arr[i] == x)
                return true;
        }
        return false;
    }
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
      vector<int> result;

    for (int i = 0; i < nums1.size(); i++) {
        for (int j = 0; j < nums2.size(); j++) {
            if (nums1[i] == nums2[j]) {
                if (!isPresent(result, nums1[i])) {
                    result.push_back(nums1[i]);
                }
                break; 
            }
        }
    }

    return result;  
    }
};