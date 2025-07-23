class Solution {
public:
    void getallSubsets(vector<int>&nums, vector<int>&ans, int i, vector<vector<int>>&allSubsets){
        if(i ==  nums.size()){
            allSubsets.push_back({ans});
            return;
        }
        ans.push_back(nums[i]);
        getallSubsets(nums, ans, i+1, allSubsets);
        ans.pop_back();

        int idx = i+1;
        while(idx < nums.size() && nums[idx] == nums[idx-1]){
            idx++;
        }
        getallSubsets(nums, ans, idx, allSubsets);
    }
    
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int>ans;
        vector<vector<int>>allSubsets;
        getallSubsets(nums, ans, 0, allSubsets);
        return allSubsets;
    }
};