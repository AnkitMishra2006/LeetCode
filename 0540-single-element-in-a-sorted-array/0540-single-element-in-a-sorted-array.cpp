class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int single = nums[0];
        int n = nums.size();
        for(int i = 1; i < n; i++)
        {
            single = single^nums[i];
        }
        return single;
    }
};