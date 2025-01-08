class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int res;
        for(int val: nums)
        {
            int freq = 0;
            for(int ele: nums)
            {
                if(ele == val) freq++;
            }
            if(freq > (nums.size()/2)) res = val;
        }
        return res;
    }
};