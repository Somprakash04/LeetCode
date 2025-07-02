class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>ans;
        unordered_set<int>s;
        int n = nums.size();
        for(int i=0; i<n; i++){
            if(s.find(nums[i]) != s.end()) continue;
            int count = 0;
            for(int j=i; j<n; j++){
                if(nums[i] == nums[j]){
                    count++;
                }
            }
            if(count>(n/3)){
                ans.push_back(nums[i]);
                s.insert(nums[i]);
            }
        }
        return ans;
    }
};