class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size(), n=nums2.size();
        int i=m-1, j=n-1;
        int size =m+n;
        int idx=m+n-1;
        int mid= idx/2;
        vector<int>ans(m+n);
        if (m==0 && n==1) return nums2[0];
        if (m==1 && n==0) return nums1[0];        
        while(i>=0 && j>=0){
            if(nums1[i]>=nums2[j]){
                ans[idx--]=nums1[i];
                i--;
            }
            else{
                ans[idx--]=nums2[j];
                j--;
            }
        }
        while(i>=0){
            ans[idx--]=nums1[i];
            i--;
        }
        while(j>=0){
            ans[idx--]=nums2[j];
            j--;
        }
        if(size%2 !=0){
            return ans[mid];
        }
        else{
            return (ans[mid+1]+ans[mid])/2.0;
        }
    }
};