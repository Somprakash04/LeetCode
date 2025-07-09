class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
     int n = nums.size();
     int F = 0;
     int totSum = accumulate(nums.begin(), nums.end(), 0);
     for(int i=0; i<n; i++){
        F+= i*nums[i];
     }
        int maxsum = F;
        for(int k=1; k<n; k++){
           F = F + totSum - n*(nums[n-k]);
           maxsum = max(maxsum, F);
        }
     return maxsum;
    }
};