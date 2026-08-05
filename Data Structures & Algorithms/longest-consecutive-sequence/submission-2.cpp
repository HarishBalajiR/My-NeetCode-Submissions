class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> seen(nums.begin(),nums.end());
        int maxlen = 0;
        for(int num : nums){
            if(!seen.count(num-1)){
                int ctr = 1, currlen = 1;
                while(seen.count(num+ctr)){
                    ctr++;
                    currlen++;
                }
                maxlen = max(maxlen,currlen);
            }
        }
        return maxlen;
    }
};