// Brute for approach
class Solution{
    public:
        int maxarea(vector<int>&height){
            int ans=0;
            for(int i=0;i<height.size();i++){
                for(int j=i+1;j<height.size();j++){
                    int w=j-i;
                    int h=min(height[i],height[j]);
                    int area=w*h;
                    ans=max(ans,area);
                }
            }
            return ans;
        }
};
// Optimal approach using 2 pointer
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxwater=0 ;
        int lp =0, rp=height.size()-1;
        while(lp<rp){
                int w=rp-lp;
                int h = min(height[lp],height[rp]);
                int currwater =w*h;
                maxwater = max(currwater,maxwater);
            height[lp]<height[rp] ? lp++: rp--;
        }
        return maxwater;
    }
};
