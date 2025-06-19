class Solution {
public:
    void getAllSubsets(vector<int>& arr, vector<int>& subset, int index,
                       vector<vector<int>> &powerSet) {
        if (index == arr.size()) {
            powerSet.push_back({subset});
            return;
        }

        // Include the current element
        subset.push_back(arr[index]);
        getAllSubsets(arr, subset, index + 1, powerSet);

        // Exclude the current element
        subset.pop_back();
        getAllSubsets(arr, subset, index + 1, powerSet);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> subset;

        getAllSubsets(nums, subset, 0, powerSet);

        return powerSet;
    }
};