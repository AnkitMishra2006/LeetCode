class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        if (n == 1 || n == 2)
            return 0;
        if (is_sorted(height.begin(), height.end())) {
            return 0;
        }
        if (is_sorted(height.begin(), height.end(), greater<int>())) {
            return 0;
        }
        if (n == 3) {
            int currWater = min(height[0], height[2]) - height[1];
            if(currWater > 0) return currWater;
            else return 0;
        }

        int* leftMax = new int[n];
        int* rightMax = new int[n];
        leftMax[0] = height[0];
        rightMax[n - 1] = height[n - 1];
        for (int i = 1; i < n; i++) {
            leftMax[i] = max(leftMax[i - 1], height[i - 1]);
            int j = n - i - 1;
            rightMax[j] = max(rightMax[j + 1], height[j + 1]);
        }

        int waterTrapped = 0;
        for (int i = 0; i < n; i++) {
            int waterAtI = min(leftMax[i], rightMax[i]) - height[i];
            if (waterAtI > 0)
                waterTrapped += waterAtI;
        }
        delete[] leftMax;
        delete[] rightMax;
        return waterTrapped;
    }
};