class Solution {
public:
    int appendCharacters(string s, string t) {
        int i = 0, j = 0, N = s.size(), M = t.size();
        while(i < N){
            if(s[i]==t[j]){
                j++;
            }
            i++;
        }
        return M-j;
    }
};