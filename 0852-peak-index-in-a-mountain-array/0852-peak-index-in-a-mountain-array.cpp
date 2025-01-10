class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int st = 1, end = arr.size() - 2;
        while (st <= end) {

            int mid = st + (end - st) / 2;

            if (arr[mid] > arr[mid+1] && arr[mid] > arr[mid - 1])
                return mid;
            if (arr[mid] > arr[mid - 1]) // peak in right side
            {
                st = mid + 1;
            } else // peak in right side
            {
                end = mid - 1;
            }
        }
        return -1;
    }
};