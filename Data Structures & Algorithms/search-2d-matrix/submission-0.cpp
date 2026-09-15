class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int R = matrix.size(), C = matrix[0].size();
        int left = 0, right = R*C-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            int midelem = matrix[mid/C][mid%C];
            if(midelem == target) return true;
            if(midelem < target) left = mid+1;
            else right = mid-1;
        }
        return false;
    }
};
