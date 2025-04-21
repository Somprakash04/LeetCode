class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int st=0, end=0, zerocount=0, maxlen=0;
        while(end<nums.size()){
            if(nums[end]==0){
                zerocount++;
            }
            while(zerocount>k){
                if(nums[st]==0){
                zerocount--;
            }
            st++;
            }
            maxlen = max(maxlen, end-st+1);
            end++;
        }
        return maxlen;
    }
};