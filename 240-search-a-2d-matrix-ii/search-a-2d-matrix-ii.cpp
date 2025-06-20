class Solution{
    public:
       bool searchMatrix(vector<vector<int>>& mat,int target){
        // Brute force approach--------------- O(m*n)
    //     for(int i=0; i<mat.size(); i++){
    //         for(int j=0; j<mat[i].size(); j++){
    //             if(mat[i][j]==target) return true;
    //         }
    //     }
    //     return false;
    //    }
        //O(m or n)------------------
        int m=mat.size();
        int n=mat[0].size();
        int r=0, c=n-1;
        while(c>=0 && r<m){
            if(target==mat[r][c]){
                return true;
            }
            else if(target<mat[r][c]){
               c--;
            }
            else{ 
                r++;
            }
        }
        return false;
       }     
};