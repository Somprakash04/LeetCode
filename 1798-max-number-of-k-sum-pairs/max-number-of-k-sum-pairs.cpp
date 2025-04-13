class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        int st=0, end=nums.size()-1, count=0;
        sort(nums.begin(),nums.end());
        while(st<end){
            if(nums[st]+nums[end]==k){
                count++;
                st++;end--;
            }
            else if(nums[st]+nums[end]<k){
                st++;
            }
            else{
                end--;
            }
        }
        return count;
    }
};