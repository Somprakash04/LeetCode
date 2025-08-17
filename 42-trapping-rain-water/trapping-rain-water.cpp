class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size(), ans = 0;
    /*  Brute forche approach--
        for(int i=0; i<n; i++){
            int lmax = height[i];
            for(int j=0; j<i; j++){
                lmax = max(lmax, height[j]);
            }
            int rmax = height[i];
            for(int j=n-1; j>i; j--){
                rmax = max(rmax, height[j]);
            }
            ans += min(lmax, rmax)-height[i];
        }*/
    //Optimal--
        vector<int>lmax(n,0);
        vector<int>rmax(n,0);
        lmax[0] = height[0];
        rmax[n-1] = height[n-1];
        for(int i=1; i<n; i++){
            lmax[i] = max(lmax[i-1], height[i]);
        }
        for(int i=n-2; i>=0; i--){
            rmax[i] = max(rmax[i+1], height[i]);
        }
        for(int i=0;i<n; i++){
            ans += min(lmax[i], rmax[i])-height[i];
        }
        return ans;
    }
};