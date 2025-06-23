class Solution {
public:

    void getAllCombinations(vector<int> &arr, int idx, int tar, vector<vector<int>> &ans, vector<int> &combin){
        if(idx == arr.size() || tar < 0) return;
        if(tar == 0) {
            ans.push_back({combin})
        }

        combin.push_back(arr[idx]);
        //single
        getAllCombinations(arr, idx+1, tar - arr[idx], ans, combin);
        //multiple
        getAllCombinations(arr, idx, tar - arr[idx], ans, combin);
        combin.pop_back();
        //exclude
        getAllCombinations(arr, idx+1, tar, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
    }
};