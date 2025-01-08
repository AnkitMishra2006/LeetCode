class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        sort(nums.begin(), nums.end());

        int freq = 1, res = nums[0], n = nums.size();

        for(int i = 1; i < n; i++)
        {
            if( nums[i] == nums[i-1] ) freq++;
            else{
                freq = 1;
                res = nums[i];
            }
            if(freq > n/2) return res;
        }
        return res;
    }
};