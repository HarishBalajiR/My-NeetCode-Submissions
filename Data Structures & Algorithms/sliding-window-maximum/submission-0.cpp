class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        int N = nums.size();
        priority_queue<int> maxheap;
        for(int index = 0 ; index < k ; index++){
            maxheap.push(nums[index]);
        }
        int left = 0, right = k;
        vector<int> ans;
        while(right < N){
            ans.push_back(maxheap.top());
            left++;
            maxheap.push(nums[right]);
            right++;
        }
        ans.push_back(maxheap.top());
        return ans;
    }
};
/*
Observations:
1. Use a maxheap to keep track of max elements in the window

*/