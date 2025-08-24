class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int maxArea = 0;

        while (left < right) {
            int h = min(height[left], height[right]);
            int w = right - left;
            maxArea = max(maxArea, h * w);

            if (height[left] < height[right]) {
                int prev = height[left];
                while (left < right && height[left] <= prev) left++;
            } else {
                int prev = height[right];
                while (left < right && height[right] <= prev) right--;
            }
        }
        return maxArea;
    }
};
