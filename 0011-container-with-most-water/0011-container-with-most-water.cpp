class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = INT_MIN;
        int waterAmt, minHeight;
        int i = 0, j = height.size() - 1 ;
        while(i < j)
        {
            minHeight = height[i] < height[j]? height[i] : height[j];
            waterAmt = minHeight * (j - i);
            max = max > waterAmt? max : waterAmt;
            if(height[i] < height[j]) i++;
            else if(height[i] > height[j]) j--;
            else{
                i++; j--;
            }
        }
        return max;
    }
};