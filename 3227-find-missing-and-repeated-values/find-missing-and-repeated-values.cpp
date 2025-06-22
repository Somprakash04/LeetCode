class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n = grid.size();
        vector<int>ans;
        unordered_set<int>s;
        int a , b;
        int expectedSum = (n*n)*(n*n + 1)/2;
        int actualSum= 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
            actualSum += grid[i][j];
            if(s.find(grid[i][j])!=s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
                s.insert(grid[i][j]);
            }
        }
        b = expectedSum + a - actualSum;
        ans.push_back(b);
        return ans;
    }
};