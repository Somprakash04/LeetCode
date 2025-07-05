class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        vector<int>ans(2,-1);
        int  n= nums.size();
        int st = 0 , end = n-1;
        while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] ==  tar) ans[0] = mid;
            if(nums[mid]<tar){
                st = mid+1;
            }
            else{
                end = mid-1;
            }
        }
         st = 0, end = n-1;
         while(st<=end){
            int mid = st+(end-st)/2;
            if(nums[mid] ==  tar) ans[1] = mid;
            if(nums[mid]>tar){
                end = mid-1;
            }
            else{
                st = mid+1;
            }
         }
        return ans;
    }
};