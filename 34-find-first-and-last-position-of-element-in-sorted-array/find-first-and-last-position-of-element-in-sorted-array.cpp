class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans(2,-1);
        int n = nums.size();

        // First occurrence
        int st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] < target) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
            if (nums[mid] == target) ans[0] = mid;
        }

        // Last occurrence
        st = 0, end = n - 1;
        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (nums[mid] > target) {
                end = mid - 1;
            } else {
                st = mid + 1;
            }
            if (nums[mid] == target) ans[1] = mid;
        }

        return ans;
    }
};