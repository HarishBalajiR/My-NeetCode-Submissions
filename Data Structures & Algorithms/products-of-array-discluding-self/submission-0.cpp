class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int N = nums.size();
        vector<int> ans(N,1);
        int prefix = 1, suffix = 1;
        //prefix -> product of all the elements to the left side of the current element
        //Suffix -> product of all the elements to the righ tside of the current element

        for(int index = 0 ; index < N ; index++){
            ans[index] *= prefix;
            prefix *= nums[index];
        }

        for(int index = N-1 ; index >= 0 ; index--){
            ans[index] *= suffix;
            suffix *= nums[index];
        }

        return ans;
    }
};
