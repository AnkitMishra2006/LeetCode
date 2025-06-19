class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l=0, r=nums.size()-1;
        while (l<=r) {
            int i= l + (r-l)/2;
            if (nums[i]==target) return i;
            else if (nums[i]<target) l=i+1;  //move to the upper half
            else r=i-1;  //move to the lower half
        }
        return -1;
    }
};