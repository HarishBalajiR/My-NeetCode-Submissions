class Solution {
public:
    int findMin(vector<int> &nums) {
        int N = nums.size(), left = 0, right = N-1;
        while(left < right){
            int mid = left + (right-left)/2;
            if(nums[mid] > nums[right]) left = mid+1;
            else right = mid;
        }
        return nums[left];
    }
};
/*
3 4 5 6 1 2
*/
