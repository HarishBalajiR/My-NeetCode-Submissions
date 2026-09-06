class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans(matrix[0].size(),vector<int>(matrix.size(),0));
        for(int r = 0 ; r < matrix.size() ; r++){
            for(int c = 0 ; c < matrix[0].size() ; c++){
                ans[c][r] = matrix[r][c];
            }
        }
        return ans;
    }
};