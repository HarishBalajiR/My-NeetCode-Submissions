class Solution {
public:
    int search(vector<int>& nums, int target) {
        int N = nums.size();
        int left = 0, right = N-1;
        while(left <= right){
            int mid = left + (right-left)/2;
            if(nums[mid] == target) return mid;
            else if(nums[left] > target) left = mid+1;
            else right = mid-1;
            //cout << left << " " << right << " " << mid << endl;
        }
        return -1;
    }
};
