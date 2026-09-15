class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int N = temperatures.size();
        vector<int> ngd(N,0);
        stack<int> st;
        for(int day = 0 ; day < N ; day++){
            int currtemp = temperatures[day];
            while(!st.empty() && temperatures[st.top()] < currtemp){
                ngd[st.top()] = day - st.top();
                st.pop();
            }
            st.push(day);
        }
        vector<int> ans(N,0);
        for(int day = 0 ; day < N ; day++){
            if(ngd[day]!=0){
                ans[day] = ngd[day];
            }
        }
        return ans;
    }
};
/*
Observations:
1. Next greater temperature
2. Calculate difference between curr day and next greater temp day
3. Thats it?

How do i keep track of curr day like a dayctr = 1
we can use index as the dayctr

day 0 = 30
day 1 = 38

38 > 30 so next day is 1 - 0 = 1

day 1 = 38
day 5 = 40
40 > 38 so next day is 5 - 1 = 4

if (nge day is found ) nge[prevday] = curr day - prevday
*/