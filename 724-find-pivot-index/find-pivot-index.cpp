class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int totsum=0;
        for(int num: nums){
            totsum+=num;
        }
        int leftsum=0;
        for(int i=0; i<nums.size(); i++){
            if(leftsum == totsum-leftsum-nums[i]){
                return i;
            }
            leftsum+=nums[i];
        }
        return -1;
    }
};