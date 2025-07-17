class Solution {
public:
    int maximumLength(vector<int>& nums) {
        int ans = 0;
        if(nums.size()<=2) return nums.size();
        vector<vector<int>>patterns{ {0,0},{0,1},{1,0},{1,1}};
        for(auto& pattern : patterns){
            int count = 0;
            for(int num : nums){
              if(num%2 == pattern[count%2]){
                   count++;
                }
            }
        ans = max(count, ans);
        }
        return ans;
    }
};