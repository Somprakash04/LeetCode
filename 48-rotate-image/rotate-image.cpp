class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        // traverse---
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                swap(matrix[i][j], matrix[j][i]);
            }
        }
        // Reverse each row---
        for(int i=0; i<n; i++){
            int left = 0, right =n-1;
            while(left<=right){
                swap(matrix[i][left], matrix[i][right]);
                left++;
                right--;
            }
        }
    }
};