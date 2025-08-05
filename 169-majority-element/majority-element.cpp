class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        for(int i=0; i<nums.size()-1; i++){
        int ans = nums[i];
        int count = 0;
        for(int j=0;j<nums.size(); j++){
         if(nums[j] == ans){
            count++;
           if(count>(n/2)){
            return ans;
           }
         }
       } 
    }
    return -1;
    }
};