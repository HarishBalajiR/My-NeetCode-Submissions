class Solution {
public:
    int findMin(vector<int> &nums) {
        int N = nums.size(), left = 0, right = N-1,ans = 0;
        while(left < right){
            int mid = left + (right-left)/2;
            if(nums[mid] > nums[right]) left = mid+1;
            else{
                ans = nums[mid];
                right = mid;
            }
        }
        return ans;
    }
};
/*
3 4 5 6 1 2
*/
