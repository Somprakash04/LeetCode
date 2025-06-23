class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<int>ans;
        int n=nums.size();
        // Brute force approach---------

        // for(int i=0;i<n;i++){
        //     for (int j=i+1;j<n;j++){
        //         if(nums[i]+nums[j] == target){
        //         ans.push_back(i);
        //         ans.push_back(j);
        //        // return ans;
        //         }
        //     }
        // } 

        //Optimal approach-------------
        unordered_map<int, int>m;
        for(int i=0; i<n; i++){
            int first= nums[i];
            int sec = target - first;
            if(m.find(sec) != m.end()){
                ans.push_back(i);
                ans.push_back(m[sec]);
                break;
            }
            m[first]=i;
        }
        return ans;    
   
    }
};