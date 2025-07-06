class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        set<int> rows, cols;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(matrix[i][j] == 0){
                    rows.insert(i);
                    cols.insert(j);
                }
            }
        }
        for(int row: rows){
            for(int j=0; j<m; j++){
                matrix[row][j]=0;
            }
        }
        for(int col: cols){
            for(int i=0; i<n; i++){
                matrix[i][col]=0;
            }
        }
    }
};