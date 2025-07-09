class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
     int n = nums.size();
     int currsum = 0;
     int totSum = accumulate(nums.begin(), nums.end(), 0);
     for(int i=0; i<n; i++){
        currsum+= i*nums[i];
     }
        int maxsum = currsum;
        for(int k=1; k<n; k++){
           currsum = currsum + totSum - n*(nums[n-k]);
           maxsum = max(maxsum, currsum);
        }
     return maxsum;
    }
};