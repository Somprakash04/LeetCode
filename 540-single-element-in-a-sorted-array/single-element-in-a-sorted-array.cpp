//Brute force Apprach-------------------------
int singleelement(vector<int>& nums){
  int n=nums.size();
  //sort(nums.begin(),nums.end());
  for(int i=0;i<n;i++){
    if(nums[i]!=nums[i+1] && nums[i]!=nums[i-1]){
      return nums[i];
    }
  }
  return -1;
}
// Optimize Approach-------------------------
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int st=0,n=nums.size(),end=n-1;
        if(n==1) return nums[0];
        while(st<=end){
           int mid=st+(end-st)/2;
           if(mid==0 && nums[0]!=nums[1]) return nums[mid];
           if(mid==n-1 && nums[n-1]!=nums[n-2]) return nums[mid];
           if(nums[mid-1]!=nums[mid] && nums[mid]!=nums[mid+1]) return nums[mid];
           if(mid%2==0){
            if(nums[mid-1]==nums[mid]){
                end=mid-1;
            }
                else{
                   st= mid+1;
                }
           }
                else{
                    if(nums[mid-1]==nums[mid]){
                        st=mid+1;
                    }
                    else{
                        end=mid-1;
                    }
                }
            
           }
        
  return -1;  }
};
