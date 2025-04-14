class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double currsum=0;
        double maxsum=0;
        int n= nums.size();
        for(int i=0; i<k; i++){
            currsum+= nums[i];
        }
        maxsum = currsum;
        for(int i=k; i<n; i++){
            currsum+= nums[i]-nums[i-k];
            maxsum = max(currsum, maxsum);
        }
        return maxsum/k;
    }
};